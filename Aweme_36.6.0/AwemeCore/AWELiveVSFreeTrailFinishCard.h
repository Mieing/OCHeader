@class UIImageView, UILabel, AWELiveVSFreeTrailFinishCardPurchaseButton;

@interface AWELiveVSFreeTrailFinishCard : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *identityNameLabel;
@property (retain, nonatomic) AWELiveVSFreeTrailFinishCardPurchaseButton *purchaseButton;

- (void)reloadWithData:(id)a0;
- (void)setupTags:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
