@class WCAdFlipCardInfo, UIImageView, UILabel, UIView;

@interface WCTimeLineAdFlipCardTitleView : UIView

@property (retain, nonatomic) WCAdFlipCardInfo *adFlipCardInfo;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *learnMoreContainer;
@property (retain, nonatomic) UILabel *learnMoreLabel;
@property (retain, nonatomic) UIImageView *learnMoreIcon;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 adFlipCardInfo:(id)a1;
- (void)generateSubviews;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
