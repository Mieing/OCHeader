@class NSArray, CMCTopLiveRankModel;

@interface CMCLiveTopviewResponseModel : AWEBaseApiModel

@property (nonatomic) long long viewerCount;
@property (nonatomic) long long commentCount;
@property (nonatomic) long long giftCount;
@property (nonatomic) long long liveWatchCount;
@property (nonatomic) long long followerCount;
@property (retain, nonatomic) CMCTopLiveRankModel *rankModel;
@property (copy, nonatomic) NSArray *nickNames;
@property (copy, nonatomic) NSArray *giftInfoArray;
@property (nonatomic) long long increaseTimes;

+ (id)rankModelJSONTransformer;
+ (id)giftInfoArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
