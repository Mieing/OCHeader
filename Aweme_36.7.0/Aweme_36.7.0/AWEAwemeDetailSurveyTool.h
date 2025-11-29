@class NSString, NSMutableDictionary;

@interface AWEAwemeDetailSurveyTool : NSObject <AWEAwemeDetailSurveyToolProtocol>

@property (retain, nonatomic) NSMutableDictionary *surveyRecordDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidTypeForSurveyInCommonDC:(id)a0;
+ (void)unregisterMessageWithReferString:(id)a0 object:(id)a1 previousPage:(id)a2;
+ (void)registerMessageWithReferString:(id)a0 object:(id)a1 previousPage:(id)a2;
+ (BOOL)isValidFeelGoodInDetail:(id)a0;
+ (BOOL)isInSurveyWhiteList:(id)a0;
+ (void)cleanQuestionnaireResponseWithReferString:(id)a0 previousPage:(id)a1;
+ (id)currQuestionnaireResponseWithReferString:(id)a0 previousPage:(id)a1;
+ (long long)currentQuestionnaireScene:(id)a0 previousPage:(id)a1;
+ (BOOL)isAfterInteractionScence:(id)a0;
+ (BOOL)enableSurveyInAwemeDetail;
+ (BOOL)isValidFeelGoodInDoubleColumn:(id)a0;
+ (BOOL)isValidFeelGoodInMediumVideoChannel:(id)a0;
+ (id)sharedInstance;

- (BOOL)hasRecordSurveyForModel:(id)a0;
- (void)addSurveyRecord:(id)a0;
- (void).cxx_destruct;

@end
