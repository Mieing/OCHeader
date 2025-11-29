@class UIButton;

@interface ACCEditBottomThumbnailAddCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIButton *addButton;
@property (copy, nonatomic) id /* block */ addActionBlock;

+ (id)cellIdentifier;

- (void)clickOnAddButton;
- (void)setImageViewWithImageName:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
