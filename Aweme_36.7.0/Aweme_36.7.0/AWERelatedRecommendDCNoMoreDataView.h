@class UILabel, UIImageView, UIView;

@interface AWERelatedRecommendDCNoMoreDataView : UIView

@property (retain, nonatomic) UILabel *noMoreVideoLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *backImageView;
@property (copy, nonatomic) id /* block */ backAction;

+ (BOOL)bigFontAdapterOn;

- (void)updateButtonTitle:(id)a0;
- (void)updateButtonContainerShowState:(BOOL)a0;
- (void)clickBottomView;
- (void)updateUIWithView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
