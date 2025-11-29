@class NSString, NSArray, AWEURLModel;

@interface AWEStarHitRankCardModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *schemaDesc;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *activityDesc;
@property (retain, nonatomic) NSArray *activityIcons;
@property (copy, nonatomic) NSString *feedButtonTitle;
@property (retain, nonatomic) AWEURLModel *buttonBgImage;

+ (id)activityIconsJSONTransformer;
+ (id)buttonBgImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
