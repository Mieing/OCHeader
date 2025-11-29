@class AWEIMFacePuzzleRecognizeSenseExerciseInfoModel;

@interface AWEIMFacePuzzleRecognizeSenseExerciseGetResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEIMFacePuzzleRecognizeSenseExerciseInfoModel *recognizeSenseExerciseInfo;
@property (nonatomic) long long recognizeVisitUserType;
@property (nonatomic) long long exerciseStatus;
@property (nonatomic) long long exerciseAnswerCnt;
@property (nonatomic) long long exerciseActivityStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
