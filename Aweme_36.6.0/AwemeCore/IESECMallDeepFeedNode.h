@class NSString, NSDictionary, NSArray;

@interface IESECMallDeepFeedNode : NSObject

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
@property (copy, nonatomic) NSString *ecomSceneID;
@property (copy, nonatomic) NSArray *lastScreenProducts;
@property (copy, nonatomic) NSDictionary *rawParams;
@property (nonatomic) double routeStart;
@property (nonatomic) double requestStartPack;
@property (nonatomic) double requestEndPack;
@property (nonatomic) double requestStartFeed;
@property (nonatomic) double requestEndFeed;
@property (nonatomic) double pageShow;
@property (copy, nonatomic) NSString *innerActions;
@property (copy, nonatomic) NSString *outerFilters;
@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSString *sceneCode;
@property (copy, nonatomic) NSString *cardParam;
@property (copy, nonatomic) NSString *triggers;
@property (nonatomic) long long notFullScreenCellCount;
@property (nonatomic) BOOL styleOptimize;
@property (copy, nonatomic) NSString *addressData;

- (void).cxx_destruct;

@end
