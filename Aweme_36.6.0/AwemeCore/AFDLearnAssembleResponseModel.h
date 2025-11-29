@class AFDLearningInterestResponseModel, AFDLearnChannelListResponse, AFDLearningFeedResponseModel, AFDTodayExcellentResponseModel;

@interface AFDLearnAssembleResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AFDLearningFeedResponseModel *feedResponse;
@property (retain, nonatomic) AFDTodayExcellentResponseModel *todayExcellentResponse;
@property (retain, nonatomic) AFDLearnChannelListResponse *channelListResponse;
@property (retain, nonatomic) AFDLearningInterestResponseModel *interestResponseModel;

+ (id)feedResponseJSONTransformer;
+ (id)todayExcellentResponseJSONTransformer;
+ (id)channelListResponseJSONTransformer;
+ (id)interestResponseModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)mergeAllPropertyKeysWithRequestIdAndLogPassback;
- (void)mergeAllPropertyKeysWithRequestId;
- (void)mergeAllPropertyKeysWithLogPassback;
- (void).cxx_destruct;

@end
