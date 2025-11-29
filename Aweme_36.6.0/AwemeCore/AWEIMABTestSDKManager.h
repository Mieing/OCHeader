@interface AWEIMABTestSDKManager : NSObject

+ (id)sharedInstance;

- (BOOL)enableCellComponentExperiment:(long long)a0;
- (void)registerABExperiments;
- (BOOL)enableCellComponentExperiment;
- (long long)enterprisePlusButtonStrategy;
- (long long)isInnerPushAllowOneConvAggregateExperimentEnable;
- (BOOL)isFoldPunishMessageExperimentEnabled;
- (BOOL)isImageVideoFoldPunishMessageExperimentEnable;
- (long long)enterpriseConversationCustomPlaceholderStrategy;
- (id)bulletCardKeyboardExperiment;
- (id)enterpriseConversationCustomPlaceholderExperiment;
- (id)enterpriseTabDefaultLandingExperiment;
- (id)enterprisePlusButtonExperiment;
- (id)foldPunishMessageExperiment;
- (id)imiOSCellComponentExperiment;
- (id)imageAndVideoFoldPunishMessageExperiment;
- (id)innerPushAllowOneConvAggregateExperiment;
- (id)formatEnablePlusPanelExperiment;
- (long long)formatEnablePlusPanelStrategy;
- (long long)enterpriseTabDefaltLandingStrategy;
- (id)enterpriseHighlyProspectiveTabRecommendChatsExperiment;
- (BOOL)isEnterpriseHighlyProspectiveTabRecommendChatsExperimentEnabled;

@end
