@class UIImageView, AWEMixVideoModel, UILabel, AWEPaymentBadgeView;
@protocol AWEMixVideoHeadViewDelegate;

@interface AWEMixVideoPanelHeadView : UIView

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIImageView *hintIcon;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (nonatomic) BOOL isLightMode;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;
@property (weak, nonatomic) id<AWEMixVideoHeadViewDelegate> delegate;

- (void)updateMixInfo:(id)a0;
- (BOOL)shouldShowPaymentTagView:(id)a0;
- (void)setLightMode;
- (void)tailIconTapped:(id)a0;
- (BOOL)shouldShowExpectedCompletionTime:(id)a0;
- (id)completionTimeText:(id)a0;
- (id)getDataYear:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
