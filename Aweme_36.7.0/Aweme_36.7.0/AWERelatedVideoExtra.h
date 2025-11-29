@class NSString, AWEMatchingColorInfoModel;

@interface AWERelatedVideoExtra : AWEBaseApiModel

@property (copy, nonatomic) NSString *labelName;
@property (copy, nonatomic) NSString *diversionSchema;
@property (copy, nonatomic) NSString *diversionSchemaUninstall;
@property (copy, nonatomic) NSString *labelType;
@property (copy, nonatomic) NSString *querys;
@property (copy, nonatomic) NSString *tags;
@property (nonatomic) long long relatedItemDiversionType;
@property (retain, nonatomic) AWEMatchingColorInfoModel *coverBaseColorInfo;
@property (copy, nonatomic) NSString *sourceType;
@property (copy, nonatomic) NSString *desc;

+ (id)coverBaseColorInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
