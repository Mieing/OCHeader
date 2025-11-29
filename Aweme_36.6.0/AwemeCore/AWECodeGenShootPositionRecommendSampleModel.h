@class AWECodeGenShootPositionModel;

@interface AWECodeGenShootPositionRecommendSampleModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenShootPositionModel *shootPositionModel;
@property (nonatomic) double score;
@property (nonatomic) BOOL defaultChecked;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
