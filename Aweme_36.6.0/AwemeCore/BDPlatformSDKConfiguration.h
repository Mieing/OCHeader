@class UIColor, NSString, NSArray, UIImage, BDPlatformSDKPrivacyProtocolConfig, BDPlatformSDKConfigurationOld;
@protocol BDPlatformSDKOAuthDelegate, BDPlatformAuthLogger, BDPlatformUIViewDelegate;

@interface BDPlatformSDKConfiguration : NSObject

@property (weak, nonatomic) id<BDPlatformSDKOAuthDelegate> oauthDelegate;
@property (copy, nonatomic) NSString *loginDomain;
@property (copy, nonatomic) NSString *passportDomain;
@property (retain, nonatomic) NSArray *URLSchemes;
@property (copy, nonatomic) NSString *iTunesUri;
@property (copy, nonatomic) NSString *productDisplayName;
@property (copy, nonatomic) NSString *loginButtonTitle;
@property (retain, nonatomic) UIColor *h1Color;
@property (retain, nonatomic) UIColor *h2Color;
@property (retain, nonatomic) UIColor *loginBtnColor;
@property (retain, nonatomic) UIColor *loginBtnTextColor;
@property (nonatomic) BOOL loginBtnRoundedCorner;
@property (nonatomic) double loginBtnCornerRadius;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *splitLineColor;
@property (nonatomic) BOOL hasBgImage;
@property (retain, nonatomic) UIImage *stayCheckedImage;
@property (retain, nonatomic) UIImage *checkedImage;
@property (retain, nonatomic) UIImage *uncheckedImage;
@property (retain, nonatomic) UIImage *defaultAppIcon;
@property (retain, nonatomic) id<BDPlatformAuthLogger> authlogger;
@property (retain, nonatomic) UIColor *scopeListTitleColor;
@property (nonatomic) double loginButtonHeight;
@property (nonatomic) double loginButtonXSpace;
@property (weak, nonatomic) id<BDPlatformUIViewDelegate> viewDelegate;
@property (copy, nonatomic) NSString *startLoadingTitle;
@property (copy, nonatomic) NSString *authLoadingTitle;
@property (nonatomic) BOOL isLTR;
@property (copy, nonatomic) NSString *lang;
@property (nonatomic) BOOL mustPortrait;
@property (retain, nonatomic) BDPlatformSDKPrivacyProtocolConfig *protocolConf;
@property (retain, nonatomic) BDPlatformSDKConfigurationOld *oldConfig;

- (void).cxx_destruct;
- (id)init;

@end
