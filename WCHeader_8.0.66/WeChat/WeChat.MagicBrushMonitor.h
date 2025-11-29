@interface WeChat.MagicBrushMonitor : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_rand;
}

+ (void)kvReportWithKey:(long long)a0 value:(long long)a1 extra:(id)a2;
+ (void)kvReportWithKey:(long long)a0 value:(long long)a1 extra:(id)a2 sampleRate:(float)a3;
+ (void)kvReportWithKeyStr:(id)a0 value:(long long)a1 extra:(id)a2;
+ (void)performanceReportWithBizName:(id)a0 sessionId:(id)a1 cardName:(id)a2 scene:(long long)a3 costTime:(long long)a4 extras:(id)a5 jsonExtra:(id)a6;
+ (void)magicClickReportWithBizName:(id)a0 subScene:(long long)a1 reportTime:(unsigned long long)a2 clickId:(id)a3 role:(long long)a4 eventType:(long long)a5 action:(long long)a6 status:(long long)a7 errCode:(long long)a8 extraInfo:(id)a9 cardName:(id)a10;

- (id)init;

@end
