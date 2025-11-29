@class NSString, NSMutableArray, AWELiveFeedbackCondition;

@interface AWELiveFeedbackCard : AWEBaseApiModel

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long feedbackId;
@property (nonatomic) int feedbackType;
@property (nonatomic) int inflowFeedbackType;
@property (retain, nonatomic) NSMutableArray *questionArray;
@property (retain, nonatomic) AWELiveFeedbackCondition *condition;
@property (retain, nonatomic) NSString *negativeText;
@property (nonatomic) int scene;

+ (id)parseFromOriginRoomModel:(id)a0;
+ (id)questionArrayJSONTransformer;
+ (id)conditionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
