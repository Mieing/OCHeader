@class AWESplashComplianceAreaModel, NSString, AWESplashAdLabelModel, AWESplashBiddingTopviewStyleModel, NSDictionary, AWESplashSkipModel, NSNumber, AWESplashClickModel;

@interface AWEAdSplashModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *splashID;
@property (nonatomic) int endTime;
@property (nonatomic) int splashShowTime;
@property (nonatomic) long long preloadType;
@property (nonatomic) BOOL enableSplashOpen;
@property (nonatomic) long long hotShowType;
@property (nonatomic) BOOL isInvalid;
@property (copy, nonatomic) NSString *cachedURL;
@property (nonatomic) BOOL isDownloading;
@property (nonatomic) double preloadSize;
@property (copy, nonatomic) NSString *wifiText;
@property (retain, nonatomic) AWESplashAdLabelModel *labelModel;
@property (retain, nonatomic) AWESplashSkipModel *skipModel;
@property (copy, nonatomic) NSDictionary *skipInfoDict;
@property (nonatomic) BOOL disableHotStartShow;
@property (nonatomic) long long splashFeedType;
@property (nonatomic) BOOL showLiveInfo;
@property (retain, nonatomic) NSNumber *topliveStyleType;
@property (nonatomic) BOOL hasSyncLiveInfo;
@property (copy, nonatomic) NSString *splashButtonText;
@property (nonatomic) long long logoColor;
@property (nonatomic) unsigned long long themeStyle;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) BOOL isPremieres;
@property (retain, nonatomic) AWESplashClickModel *clickArea;
@property (retain, nonatomic) NSDictionary *clickAreaDict;
@property (copy, nonatomic) NSDictionary *backgroundAreaDict;
@property (nonatomic) BOOL canShowBackgroundArea;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bgStyleVideoFrame;
@property (retain, nonatomic) NSNumber *creativeID;
@property (retain, nonatomic) AWESplashComplianceAreaModel *complianceArea;
@property (copy, nonatomic) NSDictionary *complianceAreaDict;
@property (copy, nonatomic) NSDictionary *demotionAreaDict;
@property (copy, nonatomic) NSDictionary *materialAreaDict;
@property (nonatomic) long long isRealtime;
@property (nonatomic) long long splashLaunchType;
@property (copy, nonatomic) NSDictionary *transitInfo;
@property (nonatomic) long long checkLiveStatus;
@property (nonatomic) long long topviewType;
@property (nonatomic) long long biddingType;
@property (readonly, nonatomic) BOOL isBiddingTopView;
@property (readonly, nonatomic) BOOL isBiddingTopLive;
@property (nonatomic) BOOL isBiddingLiveStream;
@property (retain, nonatomic) AWESplashBiddingTopviewStyleModel *biddingStyleModel;
@property (nonatomic) BOOL disableSplashPeriod;
@property (copy, nonatomic) NSDictionary *qcpxInfo;
@property (nonatomic) BOOL allowDisplayRoomIcon;
@property (copy, nonatomic) NSString *topviewSource;
@property (nonatomic) BOOL isPendant;
@property (nonatomic) BOOL forbidSplashTransfer;
@property (copy, nonatomic) NSDictionary *splashModuleInfo;
@property (nonatomic) struct CGSize { double width; double height; } moduleSize;
@property (nonatomic) long long slidesType;
@property (nonatomic) BOOL isColdInteractionViewDelayAdd;
@property (nonatomic) long long awesomeAd;
@property (copy, nonatomic) NSDictionary *logoInfoDict;

+ (id)preloadTypeJSONTransformer;
+ (id)hotShowTypeJSONTransformer;
+ (id)labelModelJSONTransformer;
+ (id)skipModelJSONTransformer;
+ (id)splashFeedTypeJSONTransformer;
+ (id)complianceAreaJSONTransformer;
+ (id)biddingStyleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
