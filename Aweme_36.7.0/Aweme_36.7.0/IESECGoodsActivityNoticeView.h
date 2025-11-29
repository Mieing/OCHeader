@class IESECGoodsDetailParameters, UILabel, IESECGoodsPriceLabel;

@interface IESECGoodsActivityNoticeView : UIView

@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;

- (void)handleActivityUpdateNotification:(id)a0;
- (void)handleActivityStateChangeNotification:(id)a0;
- (void)setupActivityNoticeView;
- (void).cxx_destruct;
- (void)updateContent;
- (id)initWithParameters:(id)a0;
- (void)dealloc;

@end
