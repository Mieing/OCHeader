@class NSString;

@interface AWEDiscoverElderAdapterTools : NSObject <AWEDiscoverDElderAdapterToolsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableElderOptimizationForSurvey;
+ (id)addElderParamsForSurvey:(id)a0;
+ (BOOL)enableElderForSurvey;
+ (double)scaleForSurveyElderOptimization;
+ (BOOL)enableLogForAddingElderParams;


@end
