@class NSString, AWEThroughQuestionnaireGeneralSmartServiceConfig, AWEThroughQuestionnaireSmartServiceCore;

@interface AWEThroughQuestionnaireGeneralSmartServiceBase : NSObject <AWEThroughQuestionnaireGeneralSmartServiceBase, AWEThroughQuestionnaireSmartServiceCoreDelegate>

@property (retain, nonatomic) NSString *serviceTag;
@property (retain, nonatomic) AWEThroughQuestionnaireSmartServiceCore *serviceCore;
@property (retain, nonatomic) AWEThroughQuestionnaireGeneralSmartServiceConfig *serviceConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)logTag;
- (id)configMap;
- (void)onEnterInnerWithParams:(id)a0;
- (void)onLeaveInnerWithParams:(id)a0;
- (id)buildCommonEventMap;
- (id)pageReferStringSet;
- (id)saveShownTasksKey;
- (id)getQuestionnaireResponse;
- (void)onSmartQuestionnaireResult:(id)a0 action:(id)a1;
- (id)innerInActionName;
- (id)innerExitActionName;
- (void)setupServiceCoreIfNeeded;
- (void)disableInnerEventObserver:(BOOL)a0;
- (void).cxx_destruct;
- (id)sceneName;

@end
