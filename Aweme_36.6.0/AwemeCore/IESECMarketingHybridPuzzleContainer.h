@class NSString, LynxView, UIView;
@protocol IESHYContainerProtocol, IESECMarketingHybridContainerDelegate;

@interface IESECMarketingHybridPuzzleContainer : UIView <IESHYHybridViewLifecycleProtocol, IESECMarketingHybridContainerProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *puzzleView;
@property (weak, nonatomic) id<IESECMarketingHybridContainerDelegate> delegate;
@property (weak, nonatomic) LynxView *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidFirstScreen;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)sendEvent:(id)a0 params:(id)a1;
- (id)findViewWithName:(id)a0;
- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0 withContainerID:(id)a1;
- (id)hmBid;
- (id)marketingConfig;
- (id)hybridMonitorContext:(id)a0;
- (id)initWithSchema:(id)a0 referFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 data:(id)a2 extra:(id)a3 commonLog:(id)a4 hybirdModel:(id)a5 lifeCycleDelegate:(id)a6;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
