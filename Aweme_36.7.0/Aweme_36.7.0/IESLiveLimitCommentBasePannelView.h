@class NSString, IESLiveCommentPanelInnerConfiguration, IESLiveCommentContext, HTSLiveFixedChatSyncData, IESLiveCommentStructurePanelConfig, IESLiveLimitCommentPagePannelView;
@protocol IESLiveCommentPanelDelegate;

@interface IESLiveLimitCommentBasePannelView : UIView <IESLiveDataSyncDelegate, IESLiveCommentPanelProtocol>

@property (retain, nonatomic) IESLiveCommentPanelInnerConfiguration *conf;
@property (retain, nonatomic) IESLiveCommentStructurePanelConfig *config;
@property (retain, nonatomic) IESLiveCommentContext *commentContext;
@property (nonatomic) double currentPanelContentHeight;
@property (retain, nonatomic) HTSLiveFixedChatSyncData *limitData;
@property (retain, nonatomic) IESLiveLimitCommentPagePannelView *pannelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveCommentPanelDelegate> delegate;

- (void)didSetAttachingDIContext;
- (void)showPanel;
- (void)dismissPanel;
- (void)animateDismissPanelWithCompletion:(id /* block */)a0;
- (void)animateShowPanelWithCompletion:(id /* block */)a0;
- (BOOL)disableContainerViewsMoveWhenCommentPanelShow;
- (BOOL)useCommnetPanelShowTracker;
- (id)initWithCommentPanelWithConf:(id)a0 commentContext:(id)a1;
- (id)initWithCommentPanelWithStructureConfig:(id)a0 commentContext:(id)a1;
- (void)willShowPanel;
- (void)willDismissPanel;
- (id)buildCommonTracker;
- (id)createPannelView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupViews;

@end
