@class UILabel, NSString, MMWebImageView;

@interface WAAuthManagerHeaderCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0;

- (void)setViewDataModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
