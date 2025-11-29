@interface IESLiveMultiRoomTransfer : NSObject

+ (BOOL)multiRoomEnable;
+ (void)_traceNoneAttachingDIContext:(id)a0 defaultMethod:(BOOL)a1 fileName:(const char *)a2 functionName:(const char *)a3 line:(int)a4;
+ (id)DIContextObj:(id)a0 fileName:(const char *)a1 functionName:(const char *)a2 line:(int)a3;
+ (id)DIContextObj:(id)a0 defaultContext:(id)a1 fileName:(const char *)a2 functionName:(const char *)a3 line:(int)a4;
+ (id)roomDIContextObj:(id)a0 fileName:(const char *)a1 functionName:(const char *)a2 line:(int)a3;
+ (id)slideDIContextObj:(id)a0 fileName:(const char *)a1 functionName:(const char *)a2 line:(int)a3;
+ (void)traceDefailtDIContextNilView:(id)a0;

@end
