@class NSString;

@interface IESLLPOICOIItemFeedbackModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long feebackType;
@property (copy, nonatomic) NSString *feedbackText;
@property (copy, nonatomic) NSString *feedbackInfo;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *feedbackTypeStringForTracking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)spuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
