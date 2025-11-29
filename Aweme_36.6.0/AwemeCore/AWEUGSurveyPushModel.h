@class NSString;

@interface AWEUGSurveyPushModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *surveyID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
