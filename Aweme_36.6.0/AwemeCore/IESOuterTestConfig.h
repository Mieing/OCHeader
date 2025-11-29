@class NSString, UIImage, NSBundle;
@protocol IESOuterTestRouterAdapter, IESOuterTestALogAdapter, IESOuterTestApplogAdapter, IESOuterTestToastAdapter, IESOuterTestImageAdapter;

@interface IESOuterTestConfig : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *shareCookieBaseURL;
@property (copy, nonatomic) NSString *appVersionName;
@property (copy, nonatomic) NSString *appVersionCode;
@property (nonatomic) unsigned long long appVersionCodeNumber;
@property (copy, nonatomic) NSString *baseURL;
@property (nonatomic) long long UIStyle;
@property (retain, nonatomic) id<IESOuterTestApplogAdapter> applogAdapter;
@property (retain, nonatomic) id<IESOuterTestALogAdapter> aLogAdapter;
@property (retain, nonatomic) id<IESOuterTestToastAdapter> toastAdapter;
@property (retain, nonatomic) id<IESOuterTestImageAdapter> imageAdapter;
@property (retain, nonatomic) id<IESOuterTestRouterAdapter> routerAdapter;
@property (copy, nonatomic) NSString *appDisplayFullName;
@property (copy, nonatomic) NSString *appDisplayShortName;
@property (retain, nonatomic) UIImage *appIconImage;
@property (copy, nonatomic) NSString *installGuideAppSubTitle;
@property (nonatomic) BOOL enableTFExpireAlert;
@property (nonatomic) BOOL enableTFFirstInstallGuide;
@property (nonatomic) BOOL enableWebviewSwipeGoBack;
@property (nonatomic) BOOL disableWebBounces;
@property (copy, nonatomic) id /* block */ webviewCustomConfig;
@property (copy, nonatomic) id /* block */ jsbDomainAllowList;
@property (nonatomic) BOOL enableSecLink;
@property (retain, nonatomic) NSBundle *localizableBundle;
@property (copy, nonatomic) NSString *localizableName;

- (void).cxx_destruct;
- (id)init;

@end
