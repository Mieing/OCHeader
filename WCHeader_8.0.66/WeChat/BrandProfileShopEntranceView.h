@class GetProfileEcCardResp, BrandProfileProductCardView, BrandProfileShopCardView, UIView;

@interface BrandProfileShopEntranceView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) BrandProfileProductCardView *productCardView;
@property (retain, nonatomic) BrandProfileShopCardView *shopCardView;
@property (retain, nonatomic) GetProfileEcCardResp *profileResp;
@property (copy, nonatomic) id /* block */ onClickForEcsJumpInfo;

- (void)updateProfileRespWithData:(id)a0;
- (id)initWithEntranceData:(id)a0;
- (id)reportParams:(int)a0;
- (void)setupUI;
- (void)layoutSubviews;
- (void)onShopCardClicked;
- (void)onProductCardClicked;
- (void)updateWithEntranceData:(id)a0;
- (double)estimateHeight;
- (void).cxx_destruct;

@end
