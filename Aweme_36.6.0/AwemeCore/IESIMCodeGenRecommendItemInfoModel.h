@class NSString, NSDictionary;

@interface IESIMCodeGenRecommendItemInfoModel : AWEBaseDataModel

@property (nonatomic) long long itemId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
