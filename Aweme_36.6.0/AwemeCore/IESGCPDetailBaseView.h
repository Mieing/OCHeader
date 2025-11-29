@class NSString, UIView, IESGCPDetailBaseViewModel;
@protocol IESGCPDetailBaseViewDelegate;

@interface IESGCPDetailBaseView : UIView <IESGCPSegmentSliderNodeViewActions, IESGCPViewExposedAble, IESGCPDIContextSubscriber>

@property (nonatomic) unsigned long long nodeViewType;
@property (copy, nonatomic) id /* block */ nodeViewAppearedStatusChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double leftRightInsets;
@property (nonatomic) double beginTime;
@property (weak, nonatomic) id<IESGCPDetailBaseViewDelegate> delegate;
@property (readonly, nonatomic) IESGCPDetailBaseViewModel *viewModel;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)didSetGameCPDIContext;
- (void)viewExposed;
- (void)viewDidNotShow;
- (void)setContainerViewAlpha:(double)a0;
- (BOOL)needFcp:(id)a0;
- (void)updateLeftRightOffset:(double)a0;
- (void)hideContainerView:(id)a0 animated:(BOOL)a1;
- (void)showContainerView:(id)a0 animated:(BOOL)a1;
- (void)observeNodeViewAppearedStatusWith:(unsigned long long)a0 nodeViewAppearedStatusChange:(id /* block */)a1;
- (void)segmentNodeViewWithType:(unsigned long long)a0 isAppeared:(BOOL)a1 byFrameChange:(BOOL)a2;
- (void)makeContainerViewShowStatus:(id)a0 oppositeToNodeViewWith:(unsigned long long)a1 animated:(BOOL)a2;
- (BOOL)needCalculateFMP:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
