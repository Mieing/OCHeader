@class NSString, IESLiveInteractionLayoutManagerConfig, IESLiveInteractionLayoutChangePublisher, IESLiveInteractionLayout;
@protocol IESLiveInteractionLayoutManagerDelegate;

@interface IESLiveInteractionAudienceLayoutManager : NSObject <IESLiveInteractionLayoutManager>

@property (retain, nonatomic) IESLiveInteractionLayout *prevLayout;
@property (retain, nonatomic) IESLiveInteractionLayout *currLayout;
@property (retain, nonatomic) IESLiveInteractionLayout *switchingLayout;
@property (retain, nonatomic) IESLiveInteractionLayoutChangePublisher *publisher;
@property (retain, nonatomic) IESLiveInteractionLayoutChangePublisher *willChangePublisher;
@property (retain, nonatomic) IESLiveInteractionLayoutManagerConfig *audienceConfig;
@property (copy, nonatomic) id /* block */ reloadCurrentLayoutBlock;
@property (nonatomic) BOOL enableUIFeatures;
@property (weak, nonatomic) id<IESLiveInteractionLayoutManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESLiveInteractionLayoutManagerConfig *config;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)didSetAttachingDIContext;
- (BOOL)isSwitchingLayout;
- (id)previousLayout;
- (id)currentLayoutFromServer;
- (void)reloadCurrentLayoutWithCompletion:(id /* block */)a0;
- (void)switchLayout:(id)a0 completion:(id /* block */)a1;
- (void)switchLayout:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)switchLayout:(id)a0 extra:(id)a1 force:(BOOL)a2 completion:(id /* block */)a3;
- (void)switchLayout:(id)a0 extra:(id)a1 source:(id)a2 force:(BOOL)a3 completion:(id /* block */)a4;
- (void)switchLayoutFrom:(id)a0 toLayout:(id)a1 extra:(id)a2 source:(id)a3 force:(BOOL)a4 completion:(id /* block */)a5;
- (void)onCurrentLayoutDidChangedUsingBlock:(id /* block */)a0;
- (id)onCurrentLayoutDidChangedWithSubscriptionUsingBlock:(id /* block */)a0;
- (void)onCurrentLayoutWillChangedUsingBlock:(id /* block */)a0;
- (id)onCurrentLayoutWillChangedWithSubscriptionUsingBlock:(id /* block */)a0;
- (void)onCurrentLayoutDidReloadUsingBlock:(id /* block */)a0;
- (void)setupWithInitialLayout:(id)a0;
- (void)startLayoutWithStartContext:(id)a0 enterFrom:(id)a1 source:(id)a2 isPreLoading:(BOOL)a3 completion:(id /* block */)a4;
- (void)handleReceivedSwitchSceneMessage:(id)a0 completion:(id /* block */)a1;
- (void)handleReceivedUILayoutChangedMessage:(id)a0 completion:(id /* block */)a1;
- (void)handleReceivedClientUIInfoChangeMessage:(id)a0;
- (void)handleReceivedLinkerBaseInfo:(id)a0;
- (void)updateCurrentLayoutTo:(id)a0 completion:(id /* block */)a1;
- (void)reloadWithUIFeatureList:(id)a0;
- (void)p_trackLayoutChangedFrom:(id)a0 to:(id)a1;
- (void)reloadLayoutWithClientUIInfo:(id)a0;
- (void)trackStartLayoutIfNeeded;
- (void)setConfig:(id)a0;
- (id)config;
- (void).cxx_destruct;
- (id)init;
- (void)dispose;
- (id)eventContext;
- (id)currentLayout;
- (void)clean;

@end
