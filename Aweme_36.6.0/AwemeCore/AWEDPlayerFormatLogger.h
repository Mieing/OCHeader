@interface AWEDPlayerFormatLogger : NSObject

+ (BOOL)enableFormatLogger;
+ (BOOL)enableFormatLoggerInstance;
+ (void)debugLogWithModel:(id)a0;
+ (void)onlineLogWithModel:(id)a0;
+ (BOOL)enableDowngrade;
+ (void)logWithLevel:(long long)a0 where:(id)a1 what:(id)a2 eventType:(id)a3 itemID:(id)a4 playState:(long long)a5 DPlayer:(id)a6 player:(id)a7 simplayer:(id)a8 ttplayer:(id)a9 extraDict:(id)a10;
+ (id)extraDictWithEventType:(id)a0 itemID:(id)a1 playState:(long long)a2 DPlayer:(id)a3 player:(id)a4 simplayer:(id)a5 ttplayer:(id)a6 extraDict:(id)a7;
+ (void)logWithModel:(id)a0;
+ (BOOL)enableFormatLog;

@end
