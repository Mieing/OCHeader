@class NSString, AWEURLModel;

@interface AWESpecialRichAwemeProductLabelModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *commentPrefix;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *productAttitude;
@property (retain, nonatomic) AWEURLModel *attitudeIcon;
@property (copy, nonatomic) NSString *anchorSchema;

+ (id)attitudeIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
