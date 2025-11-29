@class NSString, MMStackReportConnection, NSDateFormatter;

@interface FlutterFoundationCrashPlugin : NSObject <MMStackReportConnectionDelegate, MMFlutterPlugin>

@property (retain, nonatomic) MMStackReportConnection *reportConnection;
@property (retain, nonatomic) NSDateFormatter *timeFormatter;
@property (nonatomic) BOOL killSelf;
@property (nonatomic) BOOL reportToCrash;
@property (nonatomic) BOOL exitWhenKillSelf;
@property (retain, nonatomic) NSString *pluginName;
@property (nonatomic) long long engineCreateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onAttachedToEngine:(id)a0;
- (void)handleMethodCall:(id)a0 result:(id /* block */)a1;
- (void)reportKvParams:(id)a0 killSelf:(BOOL)a1 error:(id)a2 stackTrace:(id)a3 wechatImage:(id)a4;
- (void)reportStack:(id)a0 killSelf:(id)a1 error:(id)a2 stackTrace:(id)a3 wechatImage:(id)a4;
- (void)onStackReportCompleted:(BOOL)a0;
- (id)memoryInfo;
- (id)timeInfo;
- (id)byteToMegabyte:(unsigned long long)a0;
- (id)flutterInfo:(id)a0;
- (id)getWechatBinary;
- (id)reportPageName:(id)a0;
- (void).cxx_destruct;

@end
