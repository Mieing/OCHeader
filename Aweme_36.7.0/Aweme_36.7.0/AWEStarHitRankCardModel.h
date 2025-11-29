@class NSString, NSArray;

@interface AWEStarHitRankCardModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *activityDesc;
@property (retain, nonatomic) NSArray *activityIcons;

+ (id)activityIconsJSONTransformer;
+ (id)buttonBgImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
