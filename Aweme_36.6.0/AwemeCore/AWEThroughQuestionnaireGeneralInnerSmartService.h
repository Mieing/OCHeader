@class NSString;
@protocol AWEThroughQuestionnaireGeneralSmartServiceInnerDelegate;

@interface AWEThroughQuestionnaireGeneralInnerSmartService : AWEThroughQuestionnaireGeneralSmartServiceBase <AWEThroughQuestionnaireGeneralInnerSmartService>

@property (weak, nonatomic) id<AWEThroughQuestionnaireGeneralSmartServiceInnerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEnterInnerWithParams:(id)a0;
- (void)onLeaveInnerWithParams:(id)a0;
- (id)getQuestionnaireResponse;
- (void)onSmartQuestionnaireResult:(id)a0 action:(id)a1;
- (BOOL)shouldIgnoreInnerQuestionnaireShowWithModelID:(id)a0;
- (BOOL)isInnerService;
- (void).cxx_destruct;

@end
