@class UILabel, UIImageView, UIView;

@interface AWETeenMoreSheetActionCell : UICollectionViewCell

@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL isLeftAlignedStyle;

+ (Class)aAWETeenMoreSheetViewAdapterClass;

- (id)aAWETeenMoreSheetViewAdapter;
- (void)configWithAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
