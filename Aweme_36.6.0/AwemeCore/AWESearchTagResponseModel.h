@class NSArray;

@interface AWESearchTagResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *tagInfos;
@property (nonatomic) BOOL dataFromRequest;

+ (id)tagInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
