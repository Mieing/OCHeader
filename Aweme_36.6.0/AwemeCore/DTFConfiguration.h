@class NSData, NSString, DTFUICustomConfig, NSURL, NSDictionary, DTFSDKConfiguration, NSMutableArray, DTFLanguageCustomConfig, UIColor;

@interface DTFConfiguration : NSObject

@property (retain, nonatomic) NSString *forceDirection;
@property (retain, nonatomic) NSData *imageContent;
@property (retain, nonatomic) NSString *platformInfo;
@property (retain, nonatomic) NSURL *photinusPath;
@property (retain, nonatomic) NSURL *photinusInfo;
@property (retain, nonatomic) UIColor *buttonColor;
@property (retain, nonatomic) UIColor *clickedColor;
@property (retain, nonatomic) NSString *ocrInfo;
@property (retain, nonatomic) NSData *faceData;
@property (retain, nonatomic) NSData *countryData;
@property (retain, nonatomic) NSString *imageCount;
@property (retain, nonatomic) UIColor *themeColor;
@property (retain, nonatomic) UIColor *circleColor;
@property (retain, nonatomic) NSString *languageURL;
@property (retain, nonatomic) NSString *languageDocPath;
@property (retain, nonatomic) NSString *languageFacePath;
@property (retain, nonatomic) NSString *languageGuidePath;
@property (retain, nonatomic) NSString *languageFromApp;
@property (retain, nonatomic) NSString *logUploadServerURL;
@property (retain, nonatomic) NSString *facadeBundlePath;
@property (nonatomic) BOOL replayPermission;
@property (nonatomic) BOOL isReadLocal;
@property (retain, nonatomic) DTFUICustomConfig *uiCustomConfig;
@property (retain, nonatomic) DTFLanguageCustomConfig *languageCustomConfig;
@property (nonatomic) BOOL isShowTipView;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL returnContent;
@property (retain, nonatomic) NSMutableArray *EKYCImageArray;
@property (retain, nonatomic) NSMutableArray *faceImageArray;
@property (nonatomic) BOOL simpleFlags;
@property (nonatomic) BOOL tempddsFlags;
@property (nonatomic) BOOL iPv6Flags;
@property (nonatomic) BOOL needPermissionToast;
@property (nonatomic) double permissionToastDuration;
@property (copy, nonatomic) NSDictionary *responseExtInfo;
@property (retain, nonatomic) DTFSDKConfiguration *remoteConfig;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
