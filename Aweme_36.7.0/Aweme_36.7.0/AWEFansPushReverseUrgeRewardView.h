@class UIImageView, UILabel, UIView, NSMutableArray;
@protocol AWEFansPushReverseUrgeRewardViewDelegate;

@interface AWEFansPushReverseUrgeRewardView : UIView

@property (weak, nonatomic) id<AWEFansPushReverseUrgeRewardViewDelegate> delegate;
@property (nonatomic) BOOL shouldShowBubble;
@property (nonatomic) BOOL hideUrgeInfo;
@property (nonatomic) BOOL enableUrgeLiveSwitch;
@property (nonatomic) BOOL isLightMode;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *urgeCountLabel;
@property (retain, nonatomic) UILabel *giftCountLabel;
@property (retain, nonatomic) UIView *dividingLine;
@property (retain, nonatomic) UIImageView *coinIcon;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UILabel *introduceLabel;
@property (retain, nonatomic) UIImageView *introduceIcon;
@property (retain, nonatomic) NSMutableArray *giftDescriptionArea;
@property (retain, nonatomic) UIView *indicatorView;

- (void)p_setupUIWithConfig:(id)a0;
- (id)p_countToString:(long long)a0 needX:(BOOL)a1;
- (id)generateGiftDescriptonViewWithConfig:(id)a0;
- (void)p_setupViewsWithConfig:(id)a0;
- (void)p_setupConstraintsWithConfig:(id)a0;
- (void)p_didTapIntroduceArea;
- (void)p_setupUrgeOnlyConstraintsWithConfig:(id)a0;
- (void)p_setupGiftConstraintsWithConfig:(id)a0 urgeNeedShow:(BOOL)a1;
- (void)p_setupUrgeAndGiftConstraintsWithConfig:(id)a0;
- (id)urgeContentWithText:(id)a0 urgeCount:(long long)a1;
- (void)p_setupGiftDescriptionAreaWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithDelegate:(id)a0;

@end
