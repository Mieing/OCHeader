@class AWECodeGenMixVideoModel, AWECodeGenLLMRecommendMixInfoModel;

@interface AWECodeGenHeaderInfoModel : AWEBaseDataModel

@property (nonatomic) int type;
@property (retain, nonatomic) AWECodeGenMixVideoModel *mixInfoModel;
@property (nonatomic) int itemCount;
@property (retain, nonatomic) AWECodeGenLLMRecommendMixInfoModel *llmRecommendMixInfoModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
