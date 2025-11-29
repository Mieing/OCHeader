@class HTSEventContext, HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality, IESLiveComponentContext, NSDate;
@protocol IESLiveRoomService, IESLiveAudienceClarityActions;

@interface IESLiveAudienceClarityDegradeTipsStore : NSObject

@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveAudienceClarityActions> clarityActions;
@property (retain, nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality *degradeQuality;
@property (nonatomic) BOOL degradeMonitorEnable;
@property (nonatomic) BOOL degradeMonitorEnableFullScene;
@property (nonatomic) BOOL degradeTipsEnable;
@property (nonatomic) BOOL enableSaveResolution;
@property (nonatomic) long long showTime;
@property (nonatomic) long long minShowTime;
@property (nonatomic) long long degradeTipsMaxCloseTimes;
@property (nonatomic) long long degradeTipsShowTimes;
@property (nonatomic) long long stallTime;
@property (nonatomic) long long safeInterval;
@property (retain, nonatomic) NSDate *degradeTipsUseLastDate;
@property (nonatomic) long long degradeTipsCloseCount;
@property (nonatomic) long long degradeTipsShowCount;
@property (nonatomic) double degradeTipsHideLastTime;

- (void)didSetAttachingDIContext;
- (unsigned long long)_getDegradeQualityIndex;
- (void)_trackDegradeQualityOnClickButton;
- (BOOL)shouldContinueCheckStall;
- (void)showClarityDegradeTipsWith:(id)a0;
- (void)analysisStrategyInfo;
- (void)appendCloseCount;
- (void)_trackDegradeQualityOnClickExit;
- (id)initWith:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (void)hideClarityDegradeTips;
- (void)handleTipsViewOnclickDegradeWith:(id /* block */)a0;
- (void)handleTipsViewOnclickExit;
- (void).cxx_destruct;

@end
