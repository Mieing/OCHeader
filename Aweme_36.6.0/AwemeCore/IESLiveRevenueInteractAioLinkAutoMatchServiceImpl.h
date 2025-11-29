@class IESLiveRevenueInteractLynxAutoMatchBuilder, NSString;

@interface IESLiveRevenueInteractAioLinkAutoMatchServiceImpl : NSObject <IESLiveAioLinkAutoMatchService>

@property (weak, nonatomic) IESLiveRevenueInteractLynxAutoMatchBuilder *autoMatchBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)updateAutoMatchState:(long long)a0 event:(int)a1;
- (void)updateAutoMatchPredictWaitTime:(id)a0;
- (void)updateMatchBell:(id)a0;
- (id)initWithDiContext:(id)a0 autoMatchBuilder:(id)a1;
- (void).cxx_destruct;

@end
