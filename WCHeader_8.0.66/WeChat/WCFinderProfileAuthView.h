@class UIImageView, WCFinderVerifiedByFriendsView, WCFinderAuthInfoIconView, RichTextView;

@interface WCFinderProfileAuthView : UIView

@property (retain, nonatomic) RichTextView *authInfoLabel;
@property (retain, nonatomic) WCFinderVerifiedByFriendsView *verifiedByFriendsView;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) double textPaddingLeft;
@property (nonatomic) double iconCenterX;
@property (nonatomic) long long lineNumber;
@property (nonatomic) BOOL hideArrowTips;
@property (nonatomic) BOOL displayInCoverd;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createAuthInfoView;
- (void)updateWithAuthInfo:(id)a0 width:(double)a1 withAuthStr:(BOOL)a2;
- (void)updateWithAuthInfo:(id)a0 width:(double)a1;
- (void)setTextColor:(id)a0;
- (id)displayAuthInfoText:(id)a0;
- (id)displayAuthInfoTextWithoutAuthStr:(id)a0;
- (id)accessibilityLabelForInfoText:(id)a0;
- (void)onTapAuthLabel;
- (void)onTapFriendsVerified;
- (BOOL)isAccessibilityElement;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
