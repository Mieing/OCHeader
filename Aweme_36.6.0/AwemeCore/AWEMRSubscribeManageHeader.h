@class UILabel;

@interface AWEMRSubscribeManageHeader : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) double titleLabelTopInset;

+ (id)generateTitleLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
