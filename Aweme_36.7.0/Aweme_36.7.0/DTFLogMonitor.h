@class NSString, NSMutableDictionary;

@interface DTFLogMonitor : NSObject {
    NSString *_token;
    NSMutableDictionary *_bizInfo;
    NSString *_appid;
    BOOL _bIsCardFace;
}

+ (void)writeLogWithActionId:(id)a0 extParams:(id)a1 appId:(id)a2 seed:(id)a3 ucId:(id)a4;
+ (void)setUploadBlock:(id /* block */)a0;
+ (void)writeLogWithActionId:(id)a0 extParams:(id)a1 appId:(id)a2 seed:(id)a3 ucId:(id)a4 bizType:(id)a5 formatterDictionary:(id)a6;
+ (BOOL)uploadLogChooice;
+ (id)getExtLogDic:(id)a0;
+ (id)getPublicLogDic:(id)a0;
+ (void)DTF_writeLogWithActionId:(id)a0 extParams:(id)a1 appId:(id)a2 seed:(id)a3 ucId:(id)a4;
+ (void)distantUploadlog;
+ (void)setSDKVersion:(id)a0;
+ (id)getInstance;

- (void)setupBaseExtInfo;
- (void)addPublicLog:(id)a0;
- (void)addDebugMonitorLogWithSeedId:(id)a0 extParam:(id)a1;
- (void)addMonitorLogWithSeedId:(id)a0 extParam:(id)a1;
- (void)addMonitorLogWithSeedId:(id)a0 param:(id)a1 extParam:(id)a2;
- (void)addMonitorLogWithSeedId:(id)a0 ucId:(id)a1 extParam:(id)a2;
- (void)addMonitorLogWithSeedId:(id)a0 ucId:(id)a1 param:(id)a2 extParam:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)upload;

@end
