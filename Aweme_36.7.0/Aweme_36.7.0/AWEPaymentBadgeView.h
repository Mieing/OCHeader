@class AWEPaymentBadgeConfig, NSString, AWEDiscoverDInsetLabel, UIView;

@interface AWEPaymentBadgeView : UIView

@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) AWEPaymentBadgeConfig *config;
@property (nonatomic) unsigned long long paymentStatus;
@property (nonatomic) BOOL hasPaid;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL isInLimitFree;
@property (nonatomic) BOOL isVIPVideo;
@property (nonatomic) BOOL isUnlockedVideo;
@property (copy, nonatomic) NSString *hasRightText;
@property (retain, nonatomic) AWEDiscoverDInsetLabel *titleLabel;

- (void)configurePaymentBadgeViewWithMixModel:(id)a0 title:(id)a1 isCurrentUser:(BOOL)a2;
- (void)configurePaymentBadgeViewWithAwemeModel:(id)a0 isCurrentUser:(BOOL)a1;
- (void)addGradientAndCornerBackground;
- (void)updateUIWithTitle:(id)a0;
- (void)configurePaymentBadgeViewWithPlayetModel:(id)a0 title:(id)a1 isCurrentUser:(BOOL)a2;
- (id)updateHadRightTitleIfNeed:(id)a0;
- (void)usePaymentStatusStyle:(unsigned long long)a0;
- (void)configurePaymentBadgeViewWithMixModel:(id)a0 isCurrentUser:(BOOL)a1;
- (void)configurePaymentBadgeViewWithPlayetModel:(id)a0 isCurrentUser:(BOOL)a1;
- (void)configurePaymentBadgeViewServerControlWithPlayetModel:(id)a0;
- (void)configurePaymentBadgeViewServerControlWithModel:(id)a0;
- (void)setPaymentStatus:(unsigned long long)a0 isCurrentUser:(BOOL)a1 isVIPVideo:(BOOL)a2 customTitle:(id)a3;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
