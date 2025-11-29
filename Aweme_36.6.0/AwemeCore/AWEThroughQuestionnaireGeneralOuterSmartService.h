@class NSString;
@protocol AWEThroughQuestionnaireGeneralSmartServiceOuterDelegate;

@interface AWEThroughQuestionnaireGeneralOuterSmartService : AWEThroughQuestionnaireGeneralSmartServiceBase <AWEThroughQuestionnaireGeneralOuterSmartService>

@property (weak, nonatomic) id<AWEThroughQuestionnaireGeneralSmartServiceOuterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getQuestionnaireResponse;
- (void)onSmartQuestionnaireResult:(id)a0 action:(id)a1;
- (BOOL)shouldIgnoreRunWithAction:(id)a0 params:(id)a1;
- (BOOL)isInnerService;
- (void)onEnterOuterTab;
- (void)onLeaveOuterTab;
- (void).cxx_destruct;

@end
