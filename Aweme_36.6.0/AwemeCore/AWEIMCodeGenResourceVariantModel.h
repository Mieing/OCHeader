@class NSString, NSDictionary, NSArray;

@interface AWEIMCodeGenResourceVariantModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *staticUrl;
@property (copy, nonatomic) NSString *staticType;
@property (copy, nonatomic) NSString *animateUrl;
@property (copy, nonatomic) NSString *animateType;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSArray *stickerQuickReplyModelArray;
@property (nonatomic) int randomWeight;

+ (id)propertyToModelClassInArrayMap;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
