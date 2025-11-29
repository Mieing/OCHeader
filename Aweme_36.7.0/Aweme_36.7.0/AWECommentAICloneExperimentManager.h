@class NSString;

@interface AWECommentAICloneExperimentManager : NSObject <AWECommentAICloneExperimentManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)obtainBDCommonExperimentValue;
+ (void)playerPlayWithTime:(double)a0 awemeModel:(id)a1;
+ (void)registerBDCommonExperiment;


@end
