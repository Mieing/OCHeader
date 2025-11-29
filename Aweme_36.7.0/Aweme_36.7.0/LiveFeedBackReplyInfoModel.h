@class NSString, LiveFeedBackReplyMessageModel;

@interface LiveFeedBackReplyInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) LiveFeedBackReplyMessageModel *usersFeedbackData;
@property (retain, nonatomic) LiveFeedBackReplyMessageModel *advertisementFeedbakData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adFeedbackKey;
+ (id)feedbackKey;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
