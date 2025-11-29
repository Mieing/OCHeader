@class AWEIMFacePuzzlePicModel, NSDictionary, NSString;

@interface AWEIMFacePuzzleRecognizeSenseAnswerGetResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEIMFacePuzzlePicModel *resultJointPic;
@property (retain, nonatomic) NSDictionary *chooseAnswerMap;
@property (copy, nonatomic) NSString *secExerciseUserId;
@property (copy, nonatomic) NSString *secExerciseId;
@property (nonatomic) long long recognizeVisitUserType;
@property (nonatomic) long long exerciseStatus;
@property (nonatomic) long long answerStatus;
@property (nonatomic) long long exerciseActivityStatus;
@property (copy, nonatomic) NSString *conversationId;

+ (id)resultJointPicJSONTransformer;
+ (id)mainPicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
