@interface AWEUserWorkLikeControllerNew : AWEUserWorkChangeControllerNew

- (void)handleDiggBatchCancelNotification:(id)a0;
- (void)handleDiggedNotification:(id)a0;
- (void)favoriteChangedWithCount:(long long)a0;
- (void)handleDiggForFavoriteCorrection:(id)a0 change:(long long)a1;
- (void)containerViewDidLoad;

@end
