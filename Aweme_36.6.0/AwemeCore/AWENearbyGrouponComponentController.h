@class NSString;
@protocol AWEMRGrouponGuideShowCheckDelegateProtocol, AWEMRGrouponGuideDotDelegateProtocol, AWEMRGrouponGuideBubbleDelegateProtocol, AWEMessageReachFrameConfigProtocol;

@interface AWENearbyGrouponComponentController : NSObject <AWEMessageReachChannelControllerProtocol>

@property (weak, nonatomic) id<AWEMRGrouponGuideShowCheckDelegateProtocol> normalGuideCheckDelegate;
@property (weak, nonatomic) id<AWEMRGrouponGuideBubbleDelegateProtocol> bubbleGuidedelegate;
@property (weak, nonatomic) id<AWEMRGrouponGuideDotDelegateProtocol> dotGuideDelegate;
@property (readonly, nonatomic) id<AWEMessageReachFrameConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canRequestMessageReachDataWithParamsModel:(id)a0;
- (id)startRequestMessageReachDataWithWithParamsModel:(id)a0;
- (id)componentVerify:(id)a0;
- (void)sendDataToBussinessWithParamsModel:(id)a0 sceneModel:(id)a1;
- (id)canShowMessageReachDataWithParamsModel:(id)a0 componentModel:(id)a1;
- (BOOL)canEscapeRequestUidCheck;
- (void)updateMessageReachShowingModelWithParamsModel:(id)a0 componentModel:(id)a1;
- (id)getBizTrackParamsWithParamsModel:(id)a0 componentModel:(id)a1;
- (id)getBlockBizTrackParamsWithParamsModel:(id)a0 componentModel:(id)a1;
- (void)showBadgeCallbackWithContext:(id)a0;
- (void)hideBadgeCallbackWithContext:(id)a0;
- (void)downgraBadgeCallbackWithContext:(id)a0;
- (void)showBubbleCallbackWithContext:(id)a0;
- (void)dismissBubbleCallbackWithContext:(id)a0;
- (BOOL)clickBubbleCallbackWithContext:(id)a0;
- (id)bindAssociateModelWithParamsModel:(id)a0 componentModel:(id)a1;
- (id)componentShowAvailableCheckWithParamsModel:(id)a0 componentModel:(id)a1 associateModel:(id)a2;
- (void)showBadgeCallbackWithContext:(id)a0 fromUpdate:(BOOL)a1;
- (id)checkGuideValid:(id)a0;
- (id)bubbleGuideValid:(id)a0 componentModel:(id)a1 associateModel:(id)a2;
- (id)badgeGuideValid:(id)a0 componentModel:(id)a1 associateModel:(id)a2;
- (void).cxx_destruct;
- (id)channelID;
- (id)initWithConfig:(id)a0;

@end
