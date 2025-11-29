@class NSString, NSNumber;

@interface AWEPlayletContinuePlayRequestConfig : NSObject

@property (copy, nonatomic) NSString *playletId;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSNumber *preCurrentEpisode;
@property (nonatomic) BOOL filterPaymentVideo;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *hitStrategyType;
@property (nonatomic) long long hasShowFreeWatch;
@property (copy, nonatomic) NSString *entertainmentRecommendInfo;
@property (copy, nonatomic) NSString *advertiseParam;
@property (copy, nonatomic) NSString *campaignAdParam;
@property (copy, nonatomic) NSNumber *preSeriesAwemeIndex;
@property (copy, nonatomic) NSNumber *preSeriesMaterialType;

- (void).cxx_destruct;

@end
