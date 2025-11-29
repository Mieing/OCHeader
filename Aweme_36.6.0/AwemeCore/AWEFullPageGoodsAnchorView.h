@class NSDictionary, IESECGoodsPriceLabel, UIImageView, AWEAwemeModel, IESECGoodsTitleLabel, UILabel, NSString;

@interface AWEFullPageGoodsAnchorView : UIView <AWEFullPageGoodsAnchorViewProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) IESECGoodsTitleLabel *goodsTitleLabel;
@property (retain, nonatomic) UILabel *goodsDescriptionLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *goodsPriceLabel;
@property (retain, nonatomic) UILabel *goodsSalesLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *adEventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewWithModel:(id)a0 refer:(id)a1 adEventName:(id)a2 logExtraDic:(id)a3;
- (void)goodsAnchorClicked;
- (BOOL)shouldShowGoodsDescriptionLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;

@end
