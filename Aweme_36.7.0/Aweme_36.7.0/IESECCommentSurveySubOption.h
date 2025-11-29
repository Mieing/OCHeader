@class NSString;

@interface IESECCommentSurveySubOption : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *subOptionCode;
@property (copy, nonatomic) NSString *subOptionDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
