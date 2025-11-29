@class WCFinderReuseQueue, NSMutableArray, WCFinderHeadImageView, WCFinderAuthInfoIconView, UILabel, UIImageView, UIView;

@interface WCFinderPersonalCenterContactView : UIView

@property (retain, nonatomic) WCFinderHeadImageView *avatarView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) UILabel *fansLabel;
@property (retain, nonatomic) UILabel *reviewLabel;
@property (retain, nonatomic) UILabel *logoutTips;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *settingRedTextView;
@property (retain, nonatomic) UIView *settingRedDotView;
@property (retain, nonatomic) WCFinderReuseQueue *previewViewReuseQueue;
@property (retain, nonatomic) NSMutableArray *previewViews;
@property (nonatomic) double verticalPadding;
@property (nonatomic) double avatarSize;
@property (nonatomic) double avatarPadding;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupUI;
- (void)_setupAvatar;
- (void)_setupNickname;
- (void)_setupAuthIcon;
- (void)_setupReviewLabel;
- (void)_setupFansLabel;
- (void)_setupSettingViews;
- (void)_setupLogoutTip;
- (void)_setupArrow;
- (void)_setupLayout;
- (void)_applyLayout;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)updateContact:(id)a0 prepare:(id)a1 settingRedDot:(id)a2 newPreviewStyle:(BOOL)a3 previewData:(id)a4;
- (void)_setupPreviewViews:(id)a0;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabelForContact:(id)a0;
- (void)updateReport:(id)a0;
- (void).cxx_destruct;

@end
