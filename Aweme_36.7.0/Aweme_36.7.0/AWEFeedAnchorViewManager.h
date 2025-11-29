@class AWEAwemeModel, NSString, NSArray, AWEPageContext, UIView, AWEFeedAnchorViewCommonLayoutInfo, AWEFeedAnchorContainerView, NSMutableArray;
@protocol AWEAwemePlayInteractionPresenterMethodDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionPanelDelegate, AWEFeedAnchorBaseConfigProtocol, AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate;

@interface AWEFeedAnchorViewManager : NSObject <AWEFeedAnchorViewManager>

@property (weak, nonatomic) id<AWEAwemePlayInteractionPresenterMethodDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEPlayInteractionViewControllerProtocol> interactionViewController;
@property (weak, nonatomic) AWEPageContext *interactionContext;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *priorityType;
@property (retain, nonatomic) AWEFeedAnchorContainerView *containerView;
@property (retain, nonatomic) id<AWEFeedAnchorBaseConfigProtocol> currentConfig;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) UIView *childView;
@property (retain, nonatomic) NSMutableArray *anchorViewConfigs;
@property (copy, nonatomic) id /* block */ configAnchorViewBlock;
@property (readonly, nonatomic) UIView *anchorContainerView;
@property (readonly, copy, nonatomic) NSArray *registerConfigs;
@property (retain, nonatomic) AWEFeedAnchorViewCommonLayoutInfo *commonLayoutInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorInfoLogOfModel:(id)a0;
+ (id)componentViewManagerWithAwemeModel:(id)a0 sceneType:(long long)a1;

- (void)anchorViewWillShowOnSuperview;
- (void)parentViewForAnchorContainerWillShowOnScreen;
- (void)trackAnchorViewShow;
- (id)poiAnchorViewManager;
- (void)configWithAwemeModel:(id)a0 sceneType:(long long)a1;
- (void)updateAnchorConfig:(id)a0;
- (void)configWithAwemeModel:(id)a0 sceneType:(long long)a1 useTemplateAnchor:(BOOL)a2;
- (void)setupCurrentConfigWithSceneType:(long long)a0;
- (void)trackAnchorForError;
- (void)internalRefreshWithAwemeModel:(id)a0 sceneType:(long long)a1;
- (void)updateAnchorView:(BOOL)a0 needPerformOnDisplay:(BOOL)a1;
- (BOOL)delayedDisplayAnchor;
- (void)uploadLocalLifeAnchorExceptionIfNeeded;
- (void)layoutAnchorView;
- (void)updateAnchorConfigBusinessInfoWith:(id)a0;
- (void)updateAnchorView:(BOOL)a0;
- (void)tryingShowAnchorView;
- (void)hiddenAnchorIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })childViewFrame;
- (id)currentChildView;
- (void)lokiDowngrade;
- (id)poiTradeAnchorViewManager;
- (void)refreshWithAwemeModel:(id)a0 sceneType:(long long)a1;
- (BOOL)hasAnchorViewToShow;
- (BOOL)shouldShowAnchorView;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
