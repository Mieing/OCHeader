@class NSString, NSDictionary, AWEQuestionnaireTaskModel, AWEQuestionnaireExtraInfo;

@interface AWEQuestionnaireDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *feelGoodToken;
@property (retain, nonatomic) AWEQuestionnaireTaskModel *surveyTask;
@property (retain, nonatomic) AWEQuestionnaireExtraInfo *extraInfo;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraInfoJSONTransformer;
+ (id)surveyTaskJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
