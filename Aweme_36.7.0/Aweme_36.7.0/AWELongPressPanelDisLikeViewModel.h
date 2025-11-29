@interface AWELongPressPanelDisLikeViewModel : AWELongPressPanelBaseViewModel

+ (Class)aAWEPlayInteractionAdapterClass;
+ (BOOL)shouldShowNewDislikeWithAwemeModel:(id)a0 referString:(id)a1;
+ (id)longPressPanelViewModel;
+ (BOOL)p_shouldShowDisLikeOrUnfollowWithAwemeModel:(id)a0 referString:(id)a1;

- (id)aAWEPlayInteractionAdapter;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShow;

@end
