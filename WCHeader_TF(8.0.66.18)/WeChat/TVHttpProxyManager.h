@interface TVHttpProxyManager : NSObject

+ (id)getInstance;

- (id)init;
- (void)initLog;
- (void)deinitLog;
- (int)initModule:(void /* function */ *)a0 withReportFunc:(void /* function */ *)a1 withIDKeyReportFunc:(void /* function */ *)a2 withKVReportFunc:(void /* function */ *)a3;
- (void)deinitModule;
- (void)enterBackground:(id)a0;
- (void)enterForeground:(id)a0;
- (int)TVHttpProxyInit:(id)a0;
- (int)TVHttpProxyGetLocalServerPort;
- (void)TVHttpProxyDeinit;
- (id)TVHttpProxyGetVersion;
- (int)TVHttpProxyStartPlay:(id)a0 withFileType:(int)a1 withFileID:(id)a2 withFileSize:(long long)a3 withFileDuration:(int)a4;
- (int)TVHttpProxyPreLoad:(int)a0 withDuration:(int)a1;
- (id)TVHttpProxyBuildPlayURLMP4:(int)a0;
- (void)TVHttpProxySetRemainTime:(int)a0 withRemainTime:(int)a1;
- (void)TVHttpProxyStopPlay:(int)a0;
- (void)TVHttpProxySetNetWorkState:(int)a0;
- (void)TVHttpProxySetPlayerState:(int)a0;
- (void)TVHttpProxyHandlerMemoryWarning;

@end
