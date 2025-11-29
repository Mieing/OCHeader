@class RACDisposable, RACSubject, NSString, UIScrollView;
@protocol IESGCPDetailLynxViewDelegate, IESGCPLynxCardViewProtocol;

@interface IESGCPDetailLynxView : IESGCPDetailBaseView <IESHYHybridViewLifecycleProtocol, IESGCPInteractScrollChildScrollable, IESGCPGameDetailTabNavigatorActions, IESGCPDetailViewPlaceholderAble>

@property (retain, nonatomic) id<IESGCPLynxCardViewProtocol> lynxCardView;
@property (nonatomic) double height;
@property (nonatomic) double bottomInset;
@property (retain, nonatomic) RACSubject *offsetChangedSubject;
@property (nonatomic) BOOL scrollOpt;
@property (weak, nonatomic) UIScrollView *rootScrollView;
@property (retain, nonatomic) RACDisposable *scrollViewDisposable;
@property (weak, nonatomic) id<IESGCPDetailLynxViewDelegate> lynxDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidFirstScreen;
- (void)viewDidPageUpdate;
- (void)bindViewModel:(id)a0;
- (void)didSetGameCPDIContext;
- (id)hybridView;
- (void)audienceDetailVCFullHalfScreenStatusDidChange:(BOOL)a0;
- (void)gameDetailVC_viewDidAppear:(BOOL)a0 gameDetailVC:(id)a1;
- (void)gameDetailVC_viewDidDisAppear:(BOOL)a0 gameDetailVC:(id)a1;
- (void)willDisplayTab:(id)a0 tabId:(id)a1 withParams:(id)a2;
- (void)setScrollViewToTopAnimated:(BOOL)a0;
- (void)doOnContentOffsetChanged:(id /* block */)a0;
- (void)audienceDetailVCSlidingStateResult:(long long)a0;
- (void)setupPlaceholderViewIfNeed:(id)a0;
- (BOOL)enableLynxLazyLoadWithNodeID:(id)a0;
- (id)lynxLazyRenderList;
- (BOOL)preloadLynxOpt;
- (void)addDebugTagWithView:(id)a0 isPreLoad:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)scrollView;
- (void)dealloc;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
