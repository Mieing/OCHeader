@interface TingAudioChatReportCpp : NSObject

+ (void)start:(id)a0;
+ (void)mark:(id)a0 allowDuplicate:(BOOL)a1 ms:(unsigned long long)a2;
+ (void)mark:(id)a0 allowDuplicate:(BOOL)a1;
+ (void)mark:(id)a0;
+ (void)mark:(id)a0 allowDuplicate:(BOOL)a1 ms:(unsigned long long)a2 sessionId:(id)a3;
+ (void)markStr:(id)a0 value:(id)a1;
+ (void)markStr:(id)a0 value:(id)a1 sessionId:(id)a2;
+ (void)end:(id)a0;
+ (void)end:(id)a0 result:(id)a1;

@end
