@class NSDictionary, BDMannorAdTaskContext, NSString;

@interface BDMannorAdTask : NSObject

@property (copy, nonatomic) NSDictionary *taskMap;
@property (retain, nonatomic) BDMannorAdTaskContext *context;
@property (nonatomic) BOOL taskResult;
@property (nonatomic) unsigned long long finalAdTaskType;
@property (copy, nonatomic) NSString *errorMsg;

+ (id)adTaskTypeStringWith:(unsigned long long)a0;

- (id)finalAdTaskTypeOrder;
- (SEL)taskMethodWith:(unsigned long long)a0;
- (id)defaultAdTaskTypeOrder;
- (void)openWXMiniProgram;
- (void)openURLs;
- (void)openECommerce;
- (void)openLiveRoom;
- (void)openIM;
- (void)openInApp;
- (void)openOtherApp;
- (void)openMpURL;
- (void)openLynx;
- (void)openH5;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)run;
- (void)openAppStore;

@end
