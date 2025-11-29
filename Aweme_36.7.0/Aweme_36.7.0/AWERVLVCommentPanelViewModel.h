@class NSString, AWEAwemeModel, UIView, AWERelatedVideoDetailVideoCommentViewController;
@protocol AWECommentInputViewProtocol;

@interface AWERVLVCommentPanelViewModel : AWERVLVBasePanelViewModel <AWERVLVSlidingPanelProtocol>

@property (retain, nonatomic) AWERelatedVideoDetailVideoCommentViewController *commentView;
@property (retain, nonatomic) UIView<AWECommentInputViewProtocol> *commentInputView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) double lastContainerWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)containerDidLayoutSubviews;
- (id)aAWEPadModuleAdapter;
- (void)showInputView;
- (id)panelID;
- (void)onCommentAddNotification:(id)a0;
- (id)panelVC;
- (void)onCommentTotalCountNotification:(id)a0;
- (void)onCommentDeleteNotification:(id)a0;
- (void)trackCommentButtonClick:(id)a0;
- (void)startRequestAnimating;
- (void)refreshModel:(id)a0 params:(id)a1;
- (BOOL)canScrollToDownDirection;
- (void)panelDidLoad;
- (void)panelDidAppear;
- (void)adjustCommentVCLayout;
- (BOOL)slidingPanelAvailable;
- (id)slidingPanelTitle;
- (void)didScrollToPanel:(BOOL)a0 prevPanel:(id)a1;
- (void)didPanelButtonClicked;
- (void)scrollPanelToTop;
- (void)scrollPanelToTop:(BOOL)a0;
- (id)rightPanelTitle;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (struct CGPoint { double x0; double x1; })scrollOffset;
- (void)dealloc;
- (void)updateTitle;

@end
