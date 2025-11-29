@class UIImageView, MMUILabel, NSString;

@interface WCPayOfflinePaymentTipsBarView : UIView

@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) NSString *tipsContent;

- (id)initWithContainerWidth:(double)a0 tips:(id)a1;
- (void)setupContentView;
- (void).cxx_destruct;

@end
