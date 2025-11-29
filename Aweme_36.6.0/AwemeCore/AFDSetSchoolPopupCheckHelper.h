@interface AFDSetSchoolPopupCheckHelper : NSObject

- (id)p_userID;
- (BOOL)p_hitFrequencyControl;
- (void)p_requestPopupInfo:(id /* block */)a0;
- (void)checkWithIgnoreFrequencyControl:(BOOL)a0 completion:(id /* block */)a1;

@end
