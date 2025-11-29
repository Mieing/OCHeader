@class AWECodeGenTrendsReturnModel, AWECodeGenUlikeTempleteReturnModel, AWECodeGenMusicReturnModel, AWECodeGenBackReturnModel, AWECodeGenTempleteReturnModel, AWECodeGenEffectReturnModel;

@interface AWECodeGenDataModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenEffectReturnModel *effectModel;
@property (retain, nonatomic) AWECodeGenMusicReturnModel *musicModel;
@property (retain, nonatomic) AWECodeGenTrendsReturnModel *trendsModel;
@property (retain, nonatomic) AWECodeGenTempleteReturnModel *templeteModel;
@property (retain, nonatomic) AWECodeGenUlikeTempleteReturnModel *uliketempleteModel;
@property (retain, nonatomic) AWECodeGenBackReturnModel *backModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
