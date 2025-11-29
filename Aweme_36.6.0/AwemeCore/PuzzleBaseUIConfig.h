@class NSString, NSDictionary;

@interface PuzzleBaseUIConfig : NSObject

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *fallbackUrl;
@property (nonatomic) BOOL innerFallback;
@property (nonatomic) unsigned long long keneralType;
@property (nonatomic) BOOL disableOffline;
@property (nonatomic) BOOL hideLoading;
@property (nonatomic) BOOL enableShare;
@property (nonatomic) BOOL showBack;
@property (nonatomic) BOOL disableInputScroll;
@property (copy, nonatomic) NSString *webBgColor;
@property (nonatomic) BOOL enableFontScale;
@property (nonatomic) BOOL openAnimate;
@property (retain, nonatomic) NSDictionary *routerParams;
@property (copy, nonatomic) NSString *animationType;
@property (nonatomic) BOOL showClose;
@property (copy, nonatomic) NSString *sourceScene;
@property (nonatomic) BOOL autoShowNavBar;
@property (nonatomic) BOOL showFloatLive;
@property (nonatomic) long long iconTheme;
@property (nonatomic) long long prepareInitDataStartTime;
@property (nonatomic) long long prepareInitDataEndTime;
@property (copy, nonatomic) NSString *containerBgColor;
@property (nonatomic) BOOL enableLatchXBridge;

- (id)keneralTypeDesc;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
