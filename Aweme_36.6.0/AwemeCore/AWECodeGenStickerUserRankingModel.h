@class NSString, NSArray, AWECodeGenStickerRankingUserModel;

@interface AWECodeGenStickerUserRankingModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *stickerId;
@property (nonatomic) long long rankingType;
@property (copy, nonatomic) NSArray *rankingItemsModelArray;
@property (retain, nonatomic) AWECodeGenStickerRankingUserModel *selfModel;
@property (copy, nonatomic) NSString *unit;
@property (nonatomic) long long effectType;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
