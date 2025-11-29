@class NSString, NSNumber, NSDictionary;

@interface IESLiveAnchorTopicSelectedParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *shortTopicContent;
@property (copy, nonatomic) NSString *topicContent;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *topicId;
@property (retain, nonatomic) NSNumber *topicType;
@property (copy, nonatomic) NSDictionary *trackParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
