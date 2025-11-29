@class NSString, NSArray, AWEURLModel;

@interface AWETeenGeneralResourceGroupModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *resourceID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *cover;
@property (nonatomic) long long guideCardType;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *resourceValue;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSArray *albumList;
@property (nonatomic) unsigned long long resourceType;

+ (id)coverJSONTransformer;
+ (id)albumListJSONTransformer;
+ (id)awemeBlockJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
