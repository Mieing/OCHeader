@class NSNumber, NSDictionary;

@interface NewIESLiveFeedExtraModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *maxTime;
@property (retain, nonatomic) NSNumber *minTime;
@property (nonatomic) long long totalNumber;
@property (retain, nonatomic) NSDictionary *logpbOrig;
@property (nonatomic) double serverCost;
@property (nonatomic) long long isBackUp;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
