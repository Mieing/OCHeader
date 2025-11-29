@class IESLLPOIDetailBackgroundViewController, UIView;

@interface IESLLPOIDetailNGBackgroundComponentView : IESLLPOIDetailHeaderImageComponentBaseView

@property (retain, nonatomic) UIView *backgroundVCPlaceHolderView;
@property (retain, nonatomic) IESLLPOIDetailBackgroundViewController *backgroundVC;

- (void)updateViewModel:(id)a0;
- (void)updateComponentViewAlpha:(double)a0;
- (void)updateBackgroundViewTop:(double)a0;
- (void)didTap:(id)a0;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)setupUI;

@end
