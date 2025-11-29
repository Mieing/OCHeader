@class UILabel, UIImageView, UIView;

@interface AWEIMSubscribeSettingActionSheetCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *checkImageView;
@property (retain, nonatomic) UIView *seperatorLine;

- (void)renderModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
