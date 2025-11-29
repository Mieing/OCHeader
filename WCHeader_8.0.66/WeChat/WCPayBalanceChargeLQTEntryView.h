@class WCPayBalanceChargeLQTInfo, UIButton, UIImageView, UIView, MMUILabel;
@protocol WCPayBalanceChargeLQTEntryViewDelegate;

@interface WCPayBalanceChargeLQTEntryView : UIView

@property (weak, nonatomic) id<WCPayBalanceChargeLQTEntryViewDelegate> delegate;
@property (retain, nonatomic) WCPayBalanceChargeLQTInfo *chargeInfoData;
@property (retain, nonatomic) UIImageView *logoImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIButton *coverBtn;

- (id)initContentViewWithContainerWidth:(double)a0 delegate:(id)a1;
- (void)refreshContentViewWithChargeInfo:(id)a0 containerWidth:(double)a1;
- (void)reloadContentView;
- (void)coverBtnClick;
- (void).cxx_destruct;

@end
