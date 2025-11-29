@class NSString, AWECodeGenRecommendEffectInfoModel;

@interface AWECodeGenAiRecommendWordModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *shortWord;
@property (copy, nonatomic) NSString *fullWord;
@property (copy, nonatomic) NSString *shortWordWithEmoji;
@property (nonatomic) BOOL isExist;
@property (retain, nonatomic) AWECodeGenRecommendEffectInfoModel *bindEffectModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
