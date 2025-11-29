@class UIView;

@interface IESECSlicePDPNavBGView : IESECSliceXViewElementView

@property (weak, nonatomic) UIView *scrollView;
@property (retain, nonatomic) UIView *backgroundBlurredView;
@property (retain, nonatomic) UIView *navMaskView;

- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)sendScrollView:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
