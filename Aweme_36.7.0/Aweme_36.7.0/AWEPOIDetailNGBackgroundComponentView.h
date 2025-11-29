@class AWEPOIDetailBackgroundViewController, UIView;

@interface AWEPOIDetailNGBackgroundComponentView : AWEPOIDetailHeaderImageComponentBaseView

@property (retain, nonatomic) UIView *backgroundVCPlaceHolderView;
@property (retain, nonatomic) AWEPOIDetailBackgroundViewController *backgroundVC;

- (void)updateViewModel:(id)a0;
- (void)updateComponentViewAlpha:(double)a0;
- (void)updateBackgroundViewTop:(double)a0;
- (void)didTap:(id)a0;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)setupUI;

@end
