using System.Runtime.InteropServices;

public class Program
{
    [DllImport("rbx-injector.dll", CallingConvention = CallingConvention.Cdecl)]
    public static extern int rbx_inject(string dllPath, string callbackName);
}