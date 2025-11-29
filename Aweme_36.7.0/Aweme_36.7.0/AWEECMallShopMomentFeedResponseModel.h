@class NSArray, NSString;

@interface AWEECMallShopMomentFeedResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSArray *awemeList;
@property (copy, nonatomic) NSArray *recommendInfoList;
@property (nonatomic) BOOL entranceItemMiss;
@property (copy, nonatomic) NSString *missToast;
@property (copy, nonatomic) NSString *missItemID;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
