@class UILabel, UIImageView, NSString;

@interface MMWebTouristOAuthView : UIView

@property (retain, nonatomic) UILabel *titleTextLabel;
@property (retain, nonatomic) UIImageView *errorView;
@property (retain, nonatomic) UILabel *subTitleTextLabel;
@property (retain, nonatomic) UIImageView *imageArrowView;
@property (retain, nonatomic) NSString *titleWording;
@property (copy, nonatomic) id /* block */ authBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)layoutSubviews;
- (void)transferToWarningStatus;
- (void)resetTitleColor;
- (void)onClickAuth;
- (void).cxx_destruct;

@end
