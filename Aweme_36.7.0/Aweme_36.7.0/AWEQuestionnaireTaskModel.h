@class NSNumber, NSString, AWEQuestionnaireConfig;

@interface AWEQuestionnaireTaskModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *taskVersion;
@property (copy, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSNumber *surveyType;
@property (retain, nonatomic) AWEQuestionnaireConfig *questionnaireConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)questionnaireConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
