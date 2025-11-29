@interface AWELongPressPanelUnfollowViewModel : AWELongPressPanelBaseViewModel

+ (BOOL)shouldShowUnFollowWithAwemeModel:(id)a0 referString:(id)a1;
+ (BOOL)shouldShowDislikeWithAwemeModel:(id)a0 referString:(id)a1;
+ (id)longPressPanelViewModel;
+ (BOOL)p_shouldShowDisLikeOrUnfollowWithAwemeModel:(id)a0 referString:(id)a1;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShow;

@end
