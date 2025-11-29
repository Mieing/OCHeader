@class AWEDoubleColumnSearchActivityModel, NSString, UIView;
@protocol BDXViewContainerProtocol;

@interface AWEEcomSearchPendantView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxLynxView;
@property (retain, nonatomic) AWEDoubleColumnSearchActivityModel *activityModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)updateWithActivityModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
