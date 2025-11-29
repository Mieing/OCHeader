@interface BDALogProtocolHelper : NSObject

+ (void)getBDALogProtocolWriteVarPtr:(id /* block */)a0;
+ (void)getBDALogProtocolWritePtr:(id /* block */)a0;
+ (void)getBDALogProtocolOpenDefaultInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolOpenInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolWriteInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolWriteVarInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolSetLogMainThreadAsyncWriteInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolSetMaxHeapedLogInfoCountInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolSetConsoleLogInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolSetLevelInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolFlushInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolFlushSyncInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolRemoveFileInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolSetLogCallbackInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolSetLogDetailCallbackInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolGetAllInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolSetLogModifyhandlerInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolSetTagBlockListInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolSetTagConsoleAllowlistInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolGetFilePathsInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolGetZipPathsInstancePtr:(id /* block */)a0;
+ (void)getBDALogProtocolWriteOCPtr:(id /* block */)a0;

@end
