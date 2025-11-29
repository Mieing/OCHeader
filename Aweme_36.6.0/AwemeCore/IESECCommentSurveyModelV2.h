@class NSString, NSArray;

@interface IESECCommentSurveyModelV2 : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long surveyId;
@property (copy, nonatomic) NSString *surveyTitle;
@property (copy, nonatomic) NSString *surveyUrl;
@property (copy, nonatomic) NSArray *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)optionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
