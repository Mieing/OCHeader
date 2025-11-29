@class UIColor, NSArray, IESECMallDeepFeedRecReasonMultiView, UILabel;

@interface IESECMallDeepFeedSaleMessageView : UIView

@property (retain, nonatomic) UILabel *priceLogoLabel;
@property (retain, nonatomic) UILabel *priceInfoLabel;
@property (retain, nonatomic) UILabel *priceSuffixLabel;
@property (retain, nonatomic) UILabel *priceTextLabel;
@property (retain, nonatomic) UILabel *saleInfoLabel;
@property (retain, nonatomic) UIColor *priceColor;
@property (retain, nonatomic) IESECMallDeepFeedRecReasonMultiView *recReasonView;
@property (retain, nonatomic) NSArray *tagTrackParamArray;

- (void)updateWithNewModel:(id)a0 width:(double)a1;
- (void)updateWithPrice:(id)a0 suffixText:(id)a1;
- (void)updateSaleInfo:(id)a0;
- (void)updatePriceDescText:(id)a0 leftWidth:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
