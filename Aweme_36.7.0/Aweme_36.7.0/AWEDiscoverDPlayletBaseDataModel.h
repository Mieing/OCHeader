@class NSString, NSDictionary, NSArray, NSNumber;

@interface AWEDiscoverDPlayletBaseDataModel : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *playletItemID;
@property (copy, nonatomic) NSString *strategyType;
@property (copy, nonatomic) NSString *needHistory;
@property (copy, nonatomic) NSDictionary *outerParams;
@property (nonatomic) long long currentEpisode;
@property (nonatomic) long long isAd;
@property (nonatomic) long long adId;
@property (nonatomic) long long isSoftAd;
@property (copy, nonatomic) NSString *fromHotGroupId;
@property (nonatomic) long long fromOrder;
@property (nonatomic) long long fromFreeWatchBtn;
@property (retain, nonatomic) NSNumber *seriesAwemeIndex;
@property (copy, nonatomic) NSString *advertiseParam;
@property (copy, nonatomic) NSString *initialPlayletIDStr;
@property (copy, nonatomic) NSString *playletID;
@property (nonatomic) long long disableInsertAd;
@property (copy, nonatomic) NSArray *transferServerParamsArrays;

- (id)playletRequestParams;
- (void).cxx_destruct;
- (id)init;

@end
