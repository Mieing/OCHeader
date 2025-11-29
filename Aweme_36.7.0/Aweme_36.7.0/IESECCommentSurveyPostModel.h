@class NSString;

@interface IESECCommentSurveyPostModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long surveyId;
@property (nonatomic) long long surveyScene;
@property (copy, nonatomic) NSString *optionCode;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *subOptionCodeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
