@class IESECLLDCImageView, IESECGoodsDetailShopFloatEntryViewModel, UIView, UILabel, IESECGoodsDetailShopFloatEntryDataModel;

@interface IESECGoodsDetailShopFloatEntryView : UIView

@property (retain, nonatomic) IESECGoodsDetailShopFloatEntryViewModel *viewModel;
@property (retain, nonatomic) IESECGoodsDetailShopFloatEntryDataModel *dataModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESECLLDCImageView *imageView;
@property (retain, nonatomic) UILabel *contentLabel;

+ (struct CGSize { double x0; double x1; })sizeOfFloatEntry:(id)a0;

- (void)updateContentWithViewModel:(id)a0;
- (void)floatEntryDidTap;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
