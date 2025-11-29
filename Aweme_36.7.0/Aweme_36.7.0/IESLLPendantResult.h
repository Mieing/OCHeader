@class IESLLPendantBizData, IESLLPendantInfo;

@interface IESLLPendantResult : IESLLifeBaseApiModel

@property (retain, nonatomic) IESLLPendantBizData *lifePendantBizData;
@property (retain, nonatomic) IESLLPendantInfo *lifePendantInfo;

+ (id)lifePendantBizDataJSONTransformer;
+ (id)lifePendantInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
