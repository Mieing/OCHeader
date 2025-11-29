@class UIImageView, UILabel, UIView, AWEIMFansGroupManagementEntryViewModel;

@interface AWEIMFansGroupCardStyleItemCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *itemBaseView;
@property (retain, nonatomic) UIImageView *itemImageView;
@property (retain, nonatomic) UILabel *itemTitleLabel;
@property (retain, nonatomic) UIView *extraPaddingView;
@property (retain, nonatomic) AWEIMFansGroupManagementEntryViewModel *entryViewModel;

+ (id)identifier;

- (void)__setupUI;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
