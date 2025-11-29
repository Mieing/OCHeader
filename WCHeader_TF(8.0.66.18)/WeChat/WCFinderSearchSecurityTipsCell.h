@class NSString, UIImageView, UILabel, UIView;

@interface WCFinderSearchSecurityTipsCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *securityTipsIcon;
@property (retain, nonatomic) UILabel *securityTipsLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) NSString *securityTips;

+ (double)displayHeightWithSecurityTips:(id)a0 withWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
