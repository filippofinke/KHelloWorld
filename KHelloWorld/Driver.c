#include <ntddk.h>

DRIVER_INITIALIZE DriverEntry;

VOID DriverUnload(IN PDRIVER_OBJECT DriverObject)
{
	UNREFERENCED_PARAMETER(DriverObject);

	DbgPrint("KHelloWorld Unloaded!");
}

NTSTATUS DriverEntry(IN PDRIVER_OBJECT DriverObject, IN PUNICODE_STRING RegistryPath)
{
	UNREFERENCED_PARAMETER(RegistryPath);

	DbgPrint("KHelloWorld Loaded!");

	DriverObject->DriverUnload = DriverUnload;

	return STATUS_SUCCESS;
}