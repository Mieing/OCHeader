@class NSDictionary, NSString;

@interface AWEIMFacePuzzleRecognizeSenseAnswerUploadResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSDictionary *chooseAnswerMap;
@property (copy, nonatomic) NSString *secExerciseUserId;
@property (copy, nonatomic) NSString *secExerciseId;
@property (nonatomic) long long recognizeVisitUserType;
@property (nonatomic) long long exerciseStatus;

+ (id)resultJointPicJSONTransformer;
+ (id)mainPicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
