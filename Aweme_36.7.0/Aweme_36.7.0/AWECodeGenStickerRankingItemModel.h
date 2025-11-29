@class NSArray;

@interface AWECodeGenStickerRankingItemModel : AWEBaseDataModel

@property (nonatomic) long long rank;
@property (copy, nonatomic) NSArray *usersModelArray;
@property (nonatomic) long long score;
@property (nonatomic) long long total;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
