@class UIStackView, UIView, AWEIMActiveUserIndicativeView, NSString, UIImageView, CAShapeLayer, AFDStoryGradientRingView, AWEIMMessageConversation, UILabel;
@protocol AWEIMMessageTitleViewDelegate;

@interface AWEIMMessageTitleView : UIView <IESIMMessageTitleViewInterface>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *appendedLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIStackView *titleStack;
@property (retain, nonatomic) UIStackView *subtitleStack;
@property (nonatomic) unsigned long long subtitleType;
@property (retain, nonatomic) UIView *spacingView;
@property (retain, nonatomic) UIImageView *verifiedIconView;
@property (retain, nonatomic) UIView *officialView;
@property (retain, nonatomic) UILabel *officialLabel;
@property (retain, nonatomic) UIView *silverWingView;
@property (retain, nonatomic) UILabel *silverWingLabel;
@property (retain, nonatomic) UIView *officialSpacingView;
@property (retain, nonatomic) AWEIMActiveUserIndicativeView *onlineDotView;
@property (nonatomic) BOOL bubbleIsAnimating;
@property (retain, nonatomic) CAShapeLayer *notchLayer;
@property (retain, nonatomic) UIView *avatarBackgroundView;
@property (retain, nonatomic) UIView *avatarContentView;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (weak, nonatomic) id<AWEIMMessageTitleViewDelegate> delegate;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AFDStoryGradientRingView *storyRing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_isViewHidden:(id)a0;

- (void)updateColorRingWithHidden:(BOOL)a0 config:(id)a1;
- (void)p_updateSubtitleStackHiddenState;
- (void)updateWithTitle:(id)a0 subtitle:(id)a1 subtitleType:(unsigned long long)a2;
- (void)p_appendTitleWithNumber:(long long)a0;
- (void)updateWithTitle:(id)a0 titleAppendedNumber:(long long)a1 subtitle:(id)a2 subtitleType:(unsigned long long)a3;
- (BOOL)colorRingEnabled;
- (void)__subTitleClicked:(id)a0;
- (void)__handleVerifiedIconClick:(id)a0;
- (void)__handleSilverWingViewClick:(id)a0;
- (void)__handleOfficialViewClick:(id)a0;
- (void)updateSilverWingLabelText:(id)a0;
- (void)updateSilverWingLabelTextColor:(id)a0;
- (void)updateOfficialLabelText:(id)a0;
- (void)updateOfficialLabelColor:(id)a0;
- (void)updateWithTitle:(id)a0 subtitle:(id)a1;
- (void)updateSubtileLabelLineBreakMode:(long long)a0;
- (void)updateWithTitle:(id)a0 titleAppendedNumber:(long long)a1 subtitle:(id)a2;
- (void)updateOnlineDotViewWithHidden:(BOOL)a0;
- (BOOL)titleViewAlphaTapGesShouldReceiveTouch:(id)a0;
- (void)p_showVerifiedIcon;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
