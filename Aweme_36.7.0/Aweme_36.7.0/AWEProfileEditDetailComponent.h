@interface AWEProfileEditDetailComponent : AWEUserDetailBaseComponent

- (float)completionPercent;
- (id)profileHeaderVC;
- (void)didCompleteProfileInfo;
- (void)onDidRequestUser:(id)a0 error:(id)a1;
- (void)onEditCommit:(id)a0;
- (void)updateCompletionPercent;
- (void)viewDidAppear;
- (void)dealloc;
- (void)onInit;

@end
