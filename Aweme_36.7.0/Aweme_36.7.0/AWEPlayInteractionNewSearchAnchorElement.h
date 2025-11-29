@class AWESearchAnchorListModel, AWEPlayInteractionSearchAnchorView, AWESearchAnchorModel;

@interface AWEPlayInteractionNewSearchAnchorElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEPlayInteractionSearchAnchorView *searchAnchorView;
@property (retain, nonatomic) AWESearchAnchorModel *searchAnchorModel;
@property (retain, nonatomic) AWESearchAnchorListModel *anchorListModel;

- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (void)handleElementWhenPriorityAvoid:(id)a0;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)updateRelatedSearchTipView;
- (void)trackOnDisplay:(BOOL)a0;
- (void)configAnchorModelWithModel:(id)a0;
- (BOOL)shouldShowRelatedSearchTipView:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;

@end
