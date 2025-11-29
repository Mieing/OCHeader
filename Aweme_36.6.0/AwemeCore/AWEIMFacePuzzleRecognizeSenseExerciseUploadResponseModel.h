@class AWEIMFacePuzzleRecognizeSenseExerciseInfoModel;

@interface AWEIMFacePuzzleRecognizeSenseExerciseUploadResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEIMFacePuzzleRecognizeSenseExerciseInfoModel *recognizeSenseExerciseInfo;
@property (nonatomic) long long exerciseActivityStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
