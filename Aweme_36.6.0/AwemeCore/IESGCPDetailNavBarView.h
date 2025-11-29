@class NSString, IESGCPSegmentSlideSwitcherView, UIScrollView, IESGCPDetailBaseViewControl;
@protocol IESGCPGameDetailNavBarActions, IESGCPInteractScrollChildScrollable;

@interface IESGCPDetailNavBarView : IESGCPDetailBaseView <IESGCPSegmentSlideSwitcherViewDelegate, IESGCPDIContextSubscriber, IESGCPGameDetailNavBarProtocol, IESGCPGameDetailColumnListActions>

@property (retain, nonatomic) id<IESGCPGameDetailNavBarActions> navBarActions;
@property (retain, nonatomic) IESGCPSegmentSlideSwitcherView *switcherView;
@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) IESGCPDetailBaseViewControl *children;
@property (retain, nonatomic) id<IESGCPInteractScrollChildScrollable> scrollAble;
@property (nonatomic) long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)makeViewTrackNode;
- (void)didSetGameCPDIContext;
- (id)currentTabList;
- (void)navigateTo:(id)a0 metaData:(id)a1;
- (void)scrollToTabId:(id)a0 metaData:(id)a1;
- (void)columnList:(id)a0 columnListNode:(id)a1 didScrollToIndexPath:(id)a2 scrollToNode:(id)a3;
- (void)onParentScrollStatus:(BOOL)a0;
- (void)updateTabNavCornerRadius;
- (id)getAdEventReferFrom:(id)a0;
- (id)titlesInSegmentSlideSwitcherView;
- (void)segmentSwitcherView:(id)a0 didSelectAtIndex:(long long)a1 isManual:(BOOL)a2 animated:(BOOL)a3;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
