@class UILabel, UIView;

@interface CJPayAssetPayMethodHorizontalCollectionItemCell : UICollectionViewCell

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *voucherTagView;
@property (retain, nonatomic) UILabel *voucherLabel;
@property (nonatomic) BOOL needShowSelectStatus;

- (void)updateContentWithViewModel:(id)a0;
- (void)p_configCustomSelectionStyle:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
