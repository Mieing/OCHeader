@class NSString, AWEURLModel;

@interface AWETeenGeneralElementInfoModel : AWEBaseApiModel

@property (nonatomic) unsigned long long elementType;
@property (nonatomic) unsigned long long showType;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWEURLModel *icon;

+ (id)iconJSONTransformer;
+ (id)landModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
