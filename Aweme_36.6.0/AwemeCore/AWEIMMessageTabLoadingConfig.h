@class NSDictionary, NSString;

@interface AWEIMMessageTabLoadingConfig : NSObject

@property (nonatomic) double UIStatusDebounceTimeInSecond;
@property (nonatomic) double recentLinkStatusDebounceTimeInSecond;
@property (nonatomic) double wsStatusDebounceTimeInSecond;
@property (nonatomic) double networkStatusDebounceTimeInSecond;
@property (nonatomic) double disconnectedMaxWaitShowTimeInSecond;
@property (nonatomic) double loadingStatusTimeoutInSecond;
@property (nonatomic) double loadingStatusDelayTimeInSecond;
@property (retain, nonatomic) NSDictionary *statusCodeToTitleStatus;
@property (retain, nonatomic) NSString *networkGuideTipJSONStr;
@property (nonatomic) BOOL disableLog;
@property (nonatomic) BOOL disableConvLoadingEvasion;
@property (nonatomic) BOOL disableNetworkTipBanner;
@property (nonatomic) double loadingAnimDurationInSec;

+ (id)sharedConfig;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
