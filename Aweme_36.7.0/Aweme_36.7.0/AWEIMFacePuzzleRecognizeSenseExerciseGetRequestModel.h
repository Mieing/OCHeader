@class NSString;

@interface AWEIMFacePuzzleRecognizeSenseExerciseGetRequestModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *secExerciseUserId;
@property (copy, nonatomic) NSString *secExerciseId;
@property (nonatomic) long long conversationShortId;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) long long conversationType;
@property (nonatomic) long long serverMsgId;
@property (nonatomic) long long exerciseGetSourceType;

+ (id)conversationTypeJSONTransformer;
+ (id)conversationShortIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
