@class NSString, AWEECShareGoodsContainerView, UIImageView, UIView, YYLabel;

@interface AWEShareGoodsTokenNoteEcommerceNewView : AWEShareTokenNoteBaseCardView

@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEECShareGoodsContainerView *goodsContainerView;
@property (retain, nonatomic) UIView *reportContainerNewStyleView;
@property (retain, nonatomic) YYLabel *reportLabel;
@property (retain, nonatomic) UIImageView *arrowReportImageNewStyleView;

- (void)setupUIWithModel:(id)a0;
- (void)goToEcommerce;
- (void)trackLoadDuration;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
