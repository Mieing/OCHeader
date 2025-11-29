@class NSArray, NSString;

@interface AWEQuestionnaireConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *questionnaires;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)questionnairesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
