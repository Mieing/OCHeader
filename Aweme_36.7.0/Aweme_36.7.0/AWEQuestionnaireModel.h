@class NSString, NSNumber, NSArray;

@interface AWEQuestionnaireModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *questionnaireID;
@property (retain, nonatomic) NSNumber *answerType;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL shouldUseRandomOption;
@property (copy, nonatomic) NSArray *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)optionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
