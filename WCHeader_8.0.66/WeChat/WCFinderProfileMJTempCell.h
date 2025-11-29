@class WCFinderProfileMJTempModel, UIImageView, UILabel;

@interface WCFinderProfileMJTempCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderProfileMJTempModel *tempObj;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;

+ (double)displayHeightForContentVM:(id)a0 width:(double)a1 descFont:(id)a2;
+ (double)imageDisplayScaleWithWidth:(double)a0 height:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)doLayout;
- (void).cxx_destruct;

@end
