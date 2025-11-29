@class IESECMallInnerFeedPrefetch, NSString, NSDictionary, NSArray, IESECQualityInfoV2;

@interface IESECMallInnerFeedNode : NSObject

@property (copy, nonatomic) NSString *outflowEcomType;
@property (copy, nonatomic) NSString *innerActions;
@property (copy, nonatomic) NSString *queryFilters;
@property (weak, nonatomic) IESECQualityInfoV2 *infoQ;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *outflowOrder;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSDictionary *recPassParams;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *carrierSource;
@property (copy, nonatomic) NSString *sourcePage;
@property (copy, nonatomic) NSString *productSourcePage;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) BOOL mute;
@property (copy, nonatomic) NSString *deduplicationFilter;
@property (copy, nonatomic) NSString *resourceID;
@property (copy, nonatomic) NSString *ecomSceneID;
@property (nonatomic) long long innerType;
@property (copy, nonatomic) NSArray *lastScreenProducts;
@property (copy, nonatomic) NSArray *preloadCards;
@property (retain, nonatomic) IESECMallInnerFeedPrefetch *mallFeedPrefetch;
@property (copy, nonatomic) NSString *cartURL;
@property (nonatomic) long long pageCursor;
@property (nonatomic) long long outerCardType;
@property (copy, nonatomic) NSString *firstRequestID;
@property (copy, nonatomic) NSDictionary *rawParams;
@property (nonatomic) double routeStart;
@property (nonatomic) double requestStartPack;
@property (nonatomic) double requestEndPack;
@property (nonatomic) double requestStartFeed;
@property (nonatomic) double requestEndFeed;
@property (nonatomic) double pageShow;
@property (retain, nonatomic) NSDictionary *productDict;

- (void).cxx_destruct;

@end
