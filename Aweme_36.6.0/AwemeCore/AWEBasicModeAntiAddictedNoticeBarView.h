@class UIFont, NSString, UIImageView, AWEBasicModeMultiAvatarView, UILabel, NSAttributedString, MASConstraint;

@interface AWEBasicModeAntiAddictedNoticeBarView : UIView

@property (nonatomic) int tipsAlphaNumber;
@property (copy, nonatomic) NSString *tips;
@property (copy, nonatomic) NSAttributedString *attrTips;
@property (copy, nonatomic) NSString *rightDesc;
@property (nonatomic) long long noticeMode;
@property (nonatomic) BOOL enableTwoLines;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEBasicModeMultiAvatarView *avatarView;
@property (readonly, nonatomic) UIFont *tipsFont;
@property (nonatomic) BOOL shouldUseTwoLines;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) MASConstraint *tipsLabelXConstraintToArrowView;
@property (retain, nonatomic) MASConstraint *tipsLabelXConstraintToSelf;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *rightDescLabel;

- (id)tipsLabelColor_ReminderOrWarning;
- (id)tipsLabelFont_ReminderOrWarning;
- (id)imageViewImage_RemindeOrWarning;
- (id)backgroundColor_FriendVideo;
- (void)p_setNoticeMode_layoutSubviews:(long long)a0;
- (double)p_suggestedHeight:(long long)a0;
- (BOOL)isTwoLine;
- (BOOL)p_isAccessibilityElement;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)updateLayout;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)init;
- (void)setupSubviews;
- (double)suggestedHeight;

@end
