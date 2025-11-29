@class DitoTempoComponentViewModel, NSString, UIView, _TtC8TempoiOS13TempoRootView;

@interface DitoTempoComponentView : DitoComponentView <TempoiOS.TempoRootViewDelegate>

@property (weak, nonatomic) DitoTempoComponentViewModel *viewModel;
@property (retain, nonatomic) _TtC8TempoiOS13TempoRootView *tempoRootView;
@property (readonly, nonatomic) UIView *rootView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rootViewSizeDidChangeWithUniqueID:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)geckoID;
- (void)updateViewModel:(id)a0;
- (void)sendTempoEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
