@class NSString;

@interface IESLivePaidStreamTrackPlugin : NSObject <IESLivePaidStreamPlugin, IESLivePaidStreamTrackProvider>

@property (copy, nonatomic) id /* block */ trackParamHandler;
@property (nonatomic) double windowTrialFinishShowTime;
@property (nonatomic) double windowPromiseShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)commonParams:(id)a0;
- (BOOL)paidStreamPluginShouldActiveWhenHasReusingPaidStream:(id)a0;
- (void)paidStreamDidStop:(id)a0;
- (void)paidStream:(id)a0 didFinishTrialWithReason:(unsigned long long)a1;
- (void)paidStream:(id)a0 willDisplayForBlockType:(unsigned long long)a1;
- (void)paidStream:(id)a0 didEndDisplayForBlockType:(unsigned long long)a1;
- (void)paidStream:(id)a0 actionForBlockType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)paidStreamWillDisplayScreenCapturedAlert:(id)a0;
- (void)paidStream:(id)a0 willOpenPaidPanel:(unsigned long long)a1;
- (void)paidStream:(id)a0 didOpenPaidPanel:(unsigned long long)a1;
- (void)paidStream:(id)a0 didChangeAuthRetType:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)trackMachineBuyTicketModuleShow:(id)a0 entranceType:(unsigned long long)a1;
- (void)trackWindowPaidLiveTryEndShow:(id)a0;
- (double)trackWindowPaidLiveTryEndDuration:(id)a0;
- (void)trackPaidLiveCheckRemindShow:(id)a0;
- (double)windowCheckRemindDuration;
- (void)trackMachineBuyTicketModuleClick:(id)a0 entranceType:(unsigned long long)a1;
- (void)trackTicketModuleClickForBlockUserOperateWithPaidStream:(id)a0 entranceType:(unsigned long long)a1;
- (id)initWithTrackParamHandler:(id /* block */)a0;
- (void)trackBuyTicketModuleClick:(id)a0;
- (void)trackBuyTicketModuleClick:(id)a0 entranceType:(unsigned long long)a1;
- (void)trackPaidLiveTryEndShow:(id)a0;
- (void)trackBuyTicketModuleShow:(id)a0;
- (void)trackMachineBuyTicketModuleShow:(id)a0;
- (void)trackLiveVIPCardShow:(id)a0;
- (void)trackPaidLiveTryEndDuration:(id)a0;
- (void)trackMachineBuyTicketModuleClick:(id)a0;
- (void)trackLiveVIPCardClick:(id)a0;
- (void)trackPaidiveCheckRemindClick:(id)a0;
- (void)trackPaidLiveBanScreenRecord:(id)a0;
- (id)cameraCommonParams:(id)a0 entranceType:(unsigned long long)a1;
- (id)liveCommonParams:(id)a0 entranceType:(unsigned long long)a1;
- (id)commonParams:(id)a0 entranceType:(unsigned long long)a1;
- (id)watchTypeForPaidStream:(id)a0;
- (id)requestPageForPaidStream:(id)a0;
- (id)entranceParamsForPaidStream:(id)a0 entranceType:(unsigned long long)a1;
- (id)paidContentParamsForPaidStream:(id)a0 entranceType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
