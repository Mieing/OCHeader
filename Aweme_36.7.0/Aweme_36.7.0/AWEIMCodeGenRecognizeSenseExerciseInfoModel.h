@class NSString, NSDictionary, AWEIMCodeGenPicModel;

@interface AWEIMCodeGenRecognizeSenseExerciseInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *secExerciseId;
@property (copy, nonatomic) NSString *secExerciseUserId;
@property (retain, nonatomic) AWEIMCodeGenPicModel *mainPicModel;
@property (copy, nonatomic) NSDictionary *senseMap;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
