@interface AWEUserWorkDeleteControllerNew : AWEUserWorkChangeControllerNew

- (void)handleDeleteNotification:(id)a0;
- (BOOL)checkCanDeleteWithModel:(id)a0;
- (void)handleDeleteForFavoriteCorrection:(id)a0;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
