@class AWEAdTagView, NSString, UIImageView, UILabel, UIView, UIButton;

@interface AWEAdEndorseLiveGoodsInfoView : UIView <AWEAdEndorseLiveGoodsInfoView>

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UILabel *adTagLabel;
@property (retain, nonatomic) UILabel *goodsNameLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIButton *orderButton;
@property (retain, nonatomic) AWEAdTagView *adTagView;
@property (copy, nonatomic) id /* block */ liveGoodsInfoViewTappedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveGoodsView;

- (void)handleViewTapped;
- (void)handleOrderBtnTapped;
- (void)updateGoodsInfoWithAweme:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
