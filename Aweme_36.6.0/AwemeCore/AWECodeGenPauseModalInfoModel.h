@class NSArray, AWECodeGenPauseSearchModel;

@interface AWECodeGenPauseModalInfoModel : AWEBaseDataModel

@property (nonatomic) int status;
@property (copy, nonatomic) NSArray *relatedKeyPhrasesArray;
@property (retain, nonatomic) AWECodeGenPauseSearchModel *pauseSearchInfoModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
