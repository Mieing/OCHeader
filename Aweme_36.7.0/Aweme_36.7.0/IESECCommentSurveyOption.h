@class NSString, IESECCommentSurveySubOptionConfig;

@interface IESECCommentSurveyOption : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *optionCode;
@property (copy, nonatomic) NSString *optionDesc;
@property (retain, nonatomic) IESECCommentSurveySubOptionConfig *subOptionConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subOptionConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
