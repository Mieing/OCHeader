@interface WCMatrixPerfWarning : NSObject

+ (void)postNotification:(unsigned long long)a0;
+ (void)postNotification:(unsigned long long)a0 customInfo:(id)a1;
+ (unsigned long long)parseEventFromNotification:(id)a0;
+ (long long)parseThermalStateFromNotification:(id)a0;
+ (BOOL)parseMemoryExceededFromNotification:(id)a0;
+ (unsigned long long)parseFootprintMemoryFromNotification:(id)a0;
+ (unsigned long long)parseAvailableMemoryFromNotification:(id)a0;
+ (double)parseHangTimeFromNotification:(id)a0;

@end
