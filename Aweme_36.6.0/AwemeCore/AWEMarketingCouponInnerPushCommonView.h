@class NSString, UIImageView, UIView, UILabel, UIButton;
@protocol AWEMarketingCouponInnerPushCommonViewDelegate;

@interface AWEMarketingCouponInnerPushCommonView : UIView

@property (copy, nonatomic) NSString *themeColor;
@property (retain, nonatomic) UIImageView *fullBgImageView;
@property (retain, nonatomic) UIView *headerContainerView;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UILabel *headerTitleLabel;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIImageView *leftContentBgImageView;
@property (retain, nonatomic) UIView *leftLabelContainerView;
@property (retain, nonatomic) UILabel *frontTitleLeftLabel;
@property (retain, nonatomic) UILabel *frontDescTitleLabel;
@property (retain, nonatomic) UIView *mainContainerView;
@property (retain, nonatomic) UIView *mainTitleContainerView;
@property (retain, nonatomic) UIImageView *mainTitleImageView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UIView *mainDescContainerView;
@property (retain, nonatomic) UIImageView *mainDescImageView;
@property (retain, nonatomic) UILabel *mainDescLabel;
@property (retain, nonatomic) UIImageView *rightContentBgImageView;
@property (retain, nonatomic) UIButton *rightButton;
@property (weak, nonatomic) id<AWEMarketingCouponInnerPushCommonViewDelegate> delegate;

- (void)addSubviews;
- (void)addHeaderSubviews;
- (void)addContentContainerSubviews;
- (void)addLeftSubviews;
- (void)addRightSubviews;
- (void)addMiddleSubviews;
- (void)configThemeColorWithModel:(id)a0;
- (void)didTapActionButton:(id)a0;
- (void)configCommonViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)currentScale;

@end
