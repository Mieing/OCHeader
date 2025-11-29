@class AWELivePaidLiveConfigUserRight, NSString, NSMutableArray, AWEURLModel;

@interface AWELivePaidLiveConfig : AWEBaseApiModel

@property (nonatomic) long long spuId;
@property (copy, nonatomic) NSString *spuIdStr;
@property (nonatomic) long long skuId;
@property (copy, nonatomic) NSString *skuIdStr;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (retain, nonatomic) AWEURLModel *cover;
@property (nonatomic) long long sellStatus;
@property (nonatomic) long long status;
@property (retain, nonatomic) AWELivePaidLiveConfigUserRight *userRight;

+ (id)coverJSONTransformer;
+ (id)userRightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
