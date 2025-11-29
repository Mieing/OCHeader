@class WASplashADWindow, NSString, WASplashADViewController, NSDictionary, NSNumber;

@interface WAAppTaskSplashADConfig : NSObject

@property (nonatomic) BOOL canShowSplashADWindow;
@property (retain, nonatomic) WASplashADWindow *splashADWindow;
@property (weak, nonatomic) WASplashADViewController *splashADViewController;
@property (nonatomic) BOOL launchShow;
@property (nonatomic) BOOL launchDidAppear;
@property (retain, nonatomic) NSNumber *splashADEnableNumber;
@property (retain, nonatomic) NSNumber *adWorkerEnableNumber;
@property (retain, nonatomic) NSNumber *splashADAllowNoPreloadNumber;
@property (retain, nonatomic) NSNumber *splashADAllowGameNumber;
@property (nonatomic) double shouldShowTimeStamp;
@property (nonatomic) double willLayoutFirstStepViewTimeStamp;
@property (nonatomic) double willLayoutAllViewTimeStamp;
@property (nonatomic) double showTimeStamp;
@property (nonatomic) double didLayoutFirstStepViewTimeStamp;
@property (nonatomic) double didLayoutAllViewTimeStamp;
@property (nonatomic) double checkStageTimeCost;
@property (nonatomic) double layoutFirstStepViewTimeCost;
@property (nonatomic) double layoutAllViewTimeCost;
@property (nonatomic) double jsReceiveShouldShowTimeStamp;
@property (nonatomic) double jsCallShowTimeStamp;
@property (nonatomic) double shouldShowEventTimeCost;
@property (nonatomic) double showEventTimeCost;
@property (nonatomic) double adLogicFinishedTimeStamp;
@property (nonatomic) double checkShowAdTimeThreshold;
@property (nonatomic) unsigned long long notShowAdErrorCode;
@property (nonatomic) double adOperateCallTime;
@property (nonatomic) double adOperateCallReceivedTime;
@property (nonatomic) double adOperateCallbackTime;
@property (nonatomic) double adOperateCallbackReceivedTime;
@property (nonatomic) double adOperrateCallCostTime;
@property (nonatomic) double adOperateCallClientCostTime;
@property (nonatomic) double codeBlockTimeThreshold;
@property (nonatomic) unsigned long long publicLibVersion;
@property (nonatomic) BOOL injectFinishedWhenSendSholdShowSplashAD;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) BOOL splashADHasContent;
@property (copy, nonatomic) NSDictionary *splashADMenuParams;
@property (nonatomic) BOOL isHotStart;
@property (nonatomic) BOOL canHotStartShowSplashAD;
@property (nonatomic) unsigned long long lastSuspendTime;
@property (nonatomic) unsigned long long hotStartShowSplashADInterval;
@property (nonatomic) unsigned long long splashADShowState;
@property (nonatomic) unsigned long long splashADCheckState;
@property (nonatomic) unsigned long long splashADClientState;
@property (nonatomic) BOOL isPreloaded;

+ (unsigned int)splashADStateReportValueWithCheckState:(unsigned long long)a0 showState:(unsigned long long)a1;

- (void)recordShouldShow:(double)a0;
- (void)recordReceiveShow:(double)a0;
- (void)recordWillLayoutFirstStepView:(double)a0;
- (void)recordDidLayoutFirstStepView:(double)a0;
- (void)recordWillLayoutAllView:(double)a0;
- (void)recordDidLayoutAllView:(double)a0;
- (void)recordJSReceiveShouldShowTimeStamp:(double)a0 jsCallShowTimeStamp:(double)a1;
- (void)doReport;
- (void)handleShowSplashAdCalled:(BOOL)a0;
- (void)recordNotShowAdErrorCode:(unsigned long long)a0;
- (void)recordAdOperateCallTime:(double)a0 receiveTimeStamp:(double)a1;
- (void)recordClientAdOperateCallReceivedTime:(double)a0;
- (void)recordClientAdOperateCallbackTime:(double)a0;
- (void)recordInjectFinishedWhenShouldShow:(BOOL)a0;
- (void).cxx_destruct;

@end
