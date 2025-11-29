@class NSString, AWEIMCodeGenRecognizeSenseExerciseInfoModel;

@interface AWEIMCodeGenRecognizeSenseExerciseGetResponseModel : AWEBaseDataModel

@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) AWEIMCodeGenRecognizeSenseExerciseInfoModel *recognizeSenseExerciseInfoModel;
@property (nonatomic) long long recognizeVisitUserType;
@property (nonatomic) long long exerciseStatus;
@property (nonatomic) int exerciseAnswerCnt;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
