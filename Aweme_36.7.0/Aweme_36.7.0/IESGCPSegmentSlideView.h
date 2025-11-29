@class UIStackView, UIView, IESGCPSegmentSliderNodeViewObserver, IESGCPDetailContentNode, NSString, IESGCPSegmentSlideBottomContainer, IESGCPSegmentSlideScrollView, MASConstraint, NSMutableArray, IESGCPDetailThemeConfig, IESGCPAudienceDetailViewConfig, IESGCPInteractScrollBinderImpl;
@protocol IESGCPGameDetailSegmentScrollActions, IESGCPSegmentSlideViewDelegate;

@interface IESGCPSegmentSlideView : UIView <UIScrollViewDelegate, IESGCPDIContextSubscriber, IESGCPInteractScrollParentScrollable, IESGCPInteractScrollBinderListener, IESGCPSegmentSliderNodeViewObserverService, IESGCPGameDetailBottomContainerActions, IESGCPAudienceDetailScrollActions, IESGCPAudienceDetailBackgroundAction, IESGCPAudienceDetailSlideViewProtocol>

@property (retain, nonatomic) IESGCPAudienceDetailViewConfig *config;
@property (retain, nonatomic) IESGCPSegmentSlideScrollView *scrollView;
@property (retain, nonatomic) NSMutableArray *topContentViewArray;
@property (retain, nonatomic) id<IESGCPGameDetailSegmentScrollActions> segmentScrollActions;
@property (retain, nonatomic) UIStackView *scrollContentView;
@property (retain, nonatomic) UIView *scrollContentBgView;
@property (retain, nonatomic) UIView *navView;
@property (retain, nonatomic) MASConstraint *tabNavHeightConstraint;
@property (retain, nonatomic) MASConstraint *scrollViewBottomConstraint;
@property (retain, nonatomic) MASConstraint *bottomContainerBottomConstraint;
@property (retain, nonatomic) IESGCPSegmentSlideBottomContainer *bottomContainer;
@property (nonatomic) double headerTopInset;
@property (retain, nonatomic) IESGCPDetailContentNode *node;
@property (retain, nonatomic) IESGCPDetailContentNode *tabNode;
@property (retain, nonatomic) IESGCPDetailThemeConfig *themeConfig;
@property (retain, nonatomic) IESGCPInteractScrollBinderImpl *scrollBinder;
@property (retain, nonatomic) IESGCPSegmentSliderNodeViewObserver *nodeViewsObserver;
@property (nonatomic) double topLayoutLength;
@property (nonatomic) double portraitHeight;
@property (nonatomic) double portraitMaxHeight;
@property (weak, nonatomic) id<IESGCPSegmentSlideViewDelegate> delegate;
@property (readonly, nonatomic) long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)doOnContentOffsetChanged:(id /* block */)a0;
- (void)gameDetailProgress:(double)a0;
- (void)audienceDetailParentScrollOffsetDidChange:(double)a0 stickyProgress:(double)a1;
- (void)setupBottomContainer;
- (void)reloadNode:(id)a0 themeConfig:(id)a1;
- (void)setScrollViewToStickyTopWithDuration:(double)a0 complete:(id /* block */)a1;
- (void)layoutWithConfig:(id)a0 detailThemeConfig:(id)a1 isFullScreen:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 headerTopInset:(double)a1 diContext:(id)a2;
- (void)scrollViewDidScroll:(id)a0 isParent:(BOOL)a1;
- (double)headerStickyHeight;
- (void)registeToObserveSegmentSlideNodeView:(id)a0 nodeViewType:(unsigned long long)a1;
- (id)getItemFromNodeType:(unsigned long long)a0;
- (void)floatImageAnimationTriggerWithProgress:(double)a0;
- (void)binder:(id)a0 onParentScrolling:(id)a1;
- (void)binder:(id)a0 onChildScrolling:(id)a1;
- (double)criticalOffsetY;
- (void)bottomContainer:(id)a0 onBoundsChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)reloadTabNode:(id)a0;
- (void)reloadBottomContainerNode:(id)a0;
- (void)updateStackViewBackgroundColor:(id)a0;
- (void)updateHeaderTopInset:(double)a0;
- (void)updateStackViewSpacing:(double)a0;
- (void)updateTabNavContentHeight;
- (double)tabNavHeight;
- (void)setupSegmentSlideScrollView;
- (void)setupSegmentSlideViews;
- (void)setContentHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)setup;

@end
