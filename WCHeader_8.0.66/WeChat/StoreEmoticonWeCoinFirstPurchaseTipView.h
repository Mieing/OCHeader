@class UILabel, UIButton;
@protocol StoreEmoticonWeCoinFirstPurchaseTipViewDelegate;

@interface StoreEmoticonWeCoinFirstPurchaseTipView : MMPageSheetBaseView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (weak, nonatomic) id<StoreEmoticonWeCoinFirstPurchaseTipViewDelegate> delegate;

- (id)init;
- (void)layoutSubviews;
- (void)configPageSheet;
- (id)genTipLabelWithFont:(id)a0 color:(id)a1 text:(id)a2;
- (void)onConfirm;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
