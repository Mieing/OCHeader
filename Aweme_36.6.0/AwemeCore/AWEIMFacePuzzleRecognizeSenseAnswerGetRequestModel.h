@class NSString;

@interface AWEIMFacePuzzleRecognizeSenseAnswerGetRequestModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *secExerciseUserId;
@property (copy, nonatomic) NSString *secExerciseId;
@property (copy, nonatomic) NSString *secAnswerUserId;
@property (nonatomic) long long conversationShortId;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) long long conversationType;
@property (nonatomic) long long serverMsgId;
@property (nonatomic) BOOL needUserInfo;
@property (nonatomic) long long answerGetSourceType;
@property (copy, nonatomic) NSString *secExerciseAnswerId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
