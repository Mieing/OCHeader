@class NSString, AWEThroughQuestionnaireSmartServiceCore;

@interface AWEThroughLongVideoQuestionnaireSmartService : NSObject <IESFCEventObserver, AWEThroughQuestionnaireSmartServiceCoreDelegate, AWESmartLongVideoOuterQuestionnaireReverseMessage>

@property (retain, nonatomic) AWEThroughQuestionnaireSmartServiceCore *serviceCore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getConfigMap;
+ (id)sharedInstance;

- (id)logTag;
- (id)configMap;
- (void)onTriggerEvent:(unsigned long long)a0 params:(id)a1;
- (void)onEnterInnerWithParams:(id)a0;
- (void)onLeaveInnerWithParams:(id)a0;
- (id)buildCommonEventMap;
- (id)pageReferStringSet;
- (id)saveShownTasksKey;
- (id)getQuestionnaireResponse;
- (void)onSmartQuestionnaireResult:(id)a0 action:(id)a1;
- (id)innerInActionName;
- (id)innerExitActionName;
- (BOOL)shouldIgnoreRunWithAction:(id)a0 params:(id)a1;
- (void)setupLongVideoTabChangeObserver;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)sceneName;

@end
