@class NSArray;

@interface AWELiveVSPaidInfo : AWEBaseApiModel

@property (nonatomic) long long paidType;
@property (nonatomic) long long viewRight;
@property (nonatomic) long long feedDuration;
@property (copy, nonatomic) NSArray *freeViewRanges;
@property (copy, nonatomic) NSArray *goodsInfos;

+ (id)goodsInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
