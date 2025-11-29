@class UIImageView, UILabel;
@protocol WCFinderLottieImgBackgroundViewDelegate;

@interface WCFinderLottieImgBackgroundView : UIView

@property (retain, nonatomic) UIImageView *imgBackgroundView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UIImageView *leftTopImageView;
@property (weak, nonatomic) id<WCFinderLottieImgBackgroundViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithLeftImgName:(id)a0 leftTopImgName:(id)a1 bgImgName:(id)a2 title:(id)a3 subTitle:(id)a4;
- (void)layoutAllSubviews;
- (void).cxx_destruct;

@end
