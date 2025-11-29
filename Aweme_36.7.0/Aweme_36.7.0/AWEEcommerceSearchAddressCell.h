@class UIButton, AWEDoubleColumnSearchInstantLocationModel, NSDictionary, DUXBaseImageView, UIView, DUXBaseLabel;

@interface AWEEcommerceSearchAddressCell : UICollectionViewCell <AWESearchMerchandiseDoubleColumnCell>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) DUXBaseImageView *iconImgView;
@property (retain, nonatomic) DUXBaseLabel *addressLabel;
@property (retain, nonatomic) UIButton *changeAddressBtn;
@property (copy, nonatomic) NSDictionary *trackDict;
@property (retain, nonatomic) AWEDoubleColumnSearchInstantLocationModel *locationModel;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)changeBtnClicked;
- (void)updateAddressLabelWith:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
