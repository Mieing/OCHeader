@class NSString, NSArray;

@interface AWEIMCodeGenV1IMEffectGameListResponseModel : AWEBaseDataModel

@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSArray *playedModelArray;
@property (copy, nonatomic) NSArray *recommendModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
