@class UILabel, IESECLLDCImageView, IESECToastElement;

@interface IESECGoodsDetailToast : UIView

@property (retain, nonatomic) IESECLLDCImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) IESECToastElement *element;

+ (void)showWithToastElement:(id)a0;

- (void)showWithToastElement:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
