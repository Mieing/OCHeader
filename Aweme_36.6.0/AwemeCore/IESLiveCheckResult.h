@class NSString, NSDictionary;

@interface IESLiveCheckResult : NSObject

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *relativeLogids;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) BOOL enableWormhole;
@property (nonatomic) BOOL isLiving;
@property (nonatomic) long long liveStatus;
@property (nonatomic) BOOL isEcomCart;
@property (nonatomic) BOOL disableFetch;
@property (nonatomic) unsigned long long resultType;
@property (nonatomic) BOOL needDoubleCheck;
@property (nonatomic) BOOL visible;
@property (retain, nonatomic) NSDictionary *previewExtra;
@property (retain, nonatomic) NSDictionary *revLinkData;
@property (nonatomic) long long distributionScene;
@property (nonatomic) long long adType;
@property (nonatomic) long long ntpDiffTime;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *filterReason;

- (void).cxx_destruct;

@end
