@class UIStackView;

@interface AWEMVSelectedBillboardEntranceHolderView : UIView

@property (retain, nonatomic) UIStackView *containerStackView;

+ (double)viewHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 models:(id)a1;
- (void)updateWithEntranceModelArray:(id)a0;
- (void)refreshRedPointStatus;
- (void)setupUIWithModels:(id)a0;
- (void)removeArrangedSubviews:(long long)a0 fromStackView:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)themeDidChange;

@end
