@class MMWebImageView, UILabel, UIView;

@interface MMCameraTemplatePanelCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) UILabel *nonImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL isSelected;

+ (id)cellID;
+ (struct CGSize { double x0; double x1; })getCellSize;
+ (id)genLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setTemplateItem:(id)a0;
- (void).cxx_destruct;

@end
