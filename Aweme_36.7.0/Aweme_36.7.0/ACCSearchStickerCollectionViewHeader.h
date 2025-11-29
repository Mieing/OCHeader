@class UILabel;

@interface ACCSearchStickerCollectionViewHeader : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ didClickBlock;

+ (id)identifier;

- (void)clickOnTitle;
- (void).cxx_destruct;
- (void)updateWithTitle:(id)a0;

@end
