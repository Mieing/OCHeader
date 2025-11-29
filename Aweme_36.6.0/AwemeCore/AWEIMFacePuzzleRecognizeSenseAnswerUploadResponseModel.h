@class AWEIMFacePuzzlePicModel, NSDictionary, NSString;

@interface AWEIMFacePuzzleRecognizeSenseAnswerUploadResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEIMFacePuzzlePicModel *resultJointPic;
@property (nonatomic) long long useTime;
@property (retain, nonatomic) AWEIMFacePuzzlePicModel *mainPic;
@property (retain, nonatomic) NSDictionary *chooseAnswerMap;
@property (copy, nonatomic) NSString *secExerciseUserId;
@property (copy, nonatomic) NSString *secExerciseId;
@property (copy, nonatomic) NSString *secAnswerUserId;
@property (nonatomic) long long recognizeVisitUserType;
@property (copy, nonatomic) NSString *answerDataMatchSimpleStr;
@property (copy, nonatomic) NSString *answerDataMatchStr;
@property (nonatomic) long long exerciseStatus;
@property (nonatomic) long long exerciseActivityStatus;
@property (copy, nonatomic) NSString *secExerciseAnswerId;

+ (id)resultJointPicJSONTransformer;
+ (id)mainPicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
