@class NSArray, NSDictionary, NSString, FBSDKLoginManager;
@protocol FBSDKLoginButtonDelegate;

@interface FBSDKLoginButton : FBSDKButton <FBSDKButtonImpressionTracking> {
    BOOL _hasShownTooltipBubble;
    FBSDKLoginManager *_loginManager;
    NSString *_userID;
    NSString *_userName;
}

@property (nonatomic) unsigned long long defaultAudience;
@property (weak, nonatomic) id<FBSDKLoginButtonDelegate> delegate;
@property (nonatomic) unsigned long long loginBehavior;
@property (copy, nonatomic) NSArray *permissions;
@property (copy, nonatomic) NSArray *publishPermissions;
@property (copy, nonatomic) NSArray *readPermissions;
@property (nonatomic) unsigned long long tooltipBehavior;
@property (nonatomic) unsigned long long tooltipColorStyle;
@property (readonly, copy, nonatomic) NSDictionary *analyticsParameters;
@property (readonly, copy, nonatomic) NSString *impressionTrackingEventName;
@property (readonly, copy, nonatomic) NSString *impressionTrackingIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)defaultFont;
- (id)backgroundColor;
- (void)didMoveToWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)configureButton;
- (void)_accessTokenDidChangeNotification:(id)a0;
- (void)_buttonPressed:(id)a0;
- (id)_logOutTitle;
- (id)_longLogInTitle;
- (id)_shortLogInTitle;
- (void)_showTooltipIfNeeded;
- (void)_updateContent;
- (void).cxx_destruct;

@end
