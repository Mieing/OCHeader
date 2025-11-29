@class IESGCPSegmentSlideSwitcherView, NSString, NSArray, NSMutableDictionary, IESGCPSegmentSlideContentView, CAGradientLayer, NSNumber, IESGCPBubbleGuideView;

@interface IESGCPDetailTabNavView : IESGCPDetailBaseView <IESGCPSegmentSlideSwitcherViewDelegate, IESGCPSegmentSlideContentDelegate, IESGCPGameDetailTabNavigatorProtocol, IESGCPInteractScrollBinderListener, IESGCPGameDetailSegmentScrollActions, IESGCPGameDetailColumnListActions>

@property (retain, nonatomic) CAGradientLayer *topGradientLayer;
@property (retain, nonatomic) IESGCPSegmentSlideSwitcherView *switcherView;
@property (retain, nonatomic) IESGCPSegmentSlideContentView *contentView;
@property (retain, nonatomic) NSArray *children;
@property (retain, nonatomic) NSMutableDictionary *indexedViews;
@property (retain, nonatomic) NSMutableDictionary *scrollables;
@property (retain, nonatomic) NSMutableDictionary *displayParams;
@property (retain, nonatomic) NSMutableDictionary *bottomChildren;
@property (retain, nonatomic) NSMutableDictionary *bottomChildrenControl;
@property (retain, nonatomic) NSMutableDictionary *bottomViews;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) IESGCPBubbleGuideView *bubbleGuideView;
@property (nonatomic) long long currentColumnListIndex;
@property (retain, nonatomic) NSNumber *hadShowBubbleGuideView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)makeViewTrackNode;
- (void)didSetGameCPDIContext;
- (void)navigateTo:(id)a0 params:(id)a1;
- (void)columnList:(id)a0 columnListNode:(id)a1 didScrollToIndexPath:(id)a2 scrollToNode:(id)a3;
- (void)onParentScrollStatus:(BOOL)a0;
- (BOOL)shouldHideTabNaviSwitcher;
- (void)updateTabNavCornerRadius;
- (id)titlesInSegmentSlideSwitcherView;
- (void)segmentSwitcherView:(id)a0 didSelectAtIndex:(long long)a1 isManual:(BOOL)a2 animated:(BOOL)a3;
- (void)_setContentAtIndex:(long long)a0 animated:(BOOL)a1 params:(id)a2;
- (void)handleNavBottomContentWithIndex:(long long)a0;
- (void)childScrollViewDidScroll:(id)a0 atIndex:(unsigned long long)a1;
- (void)markDidShowBubbleGuideView;
- (id)getAdEventReferFromIndex:(long long)a0;
- (void)p_updateBottomContent:(id)a0 forIndex:(unsigned long long)a1;
- (unsigned long long)numberOfContentForContentView:(id)a0;
- (id)contentView:(id)a0 itemViewForIndex:(unsigned long long)a1;
- (void)contentView:(id)a0 didSelectAtIndex:(long long)a1 animated:(BOOL)a2;
- (void)contentView:(id)a0 willDisplayItemView:(id)a1 atIndex:(unsigned long long)a2;
- (void)contentView:(id)a0 willEndDisplayItemView:(id)a1 atIndex:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)makeLayout;

@end
