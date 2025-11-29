@interface AFDMomentColorRingTableDataHandler : AFDColorRingTableBaseDataHandler

- (BOOL)updateUser:(id)a0 withNewUser:(id)a1;
- (void)didInitDataProvider;
- (void)didIgnoreReverseCloseFriend:(id)a0;
- (void)didReleaseEachOtherCloseFriends:(id)a0;
- (void)didAppendMomentWithPublishModel:(id)a0;
- (void)didFinishPublishMomentWithPublishModel:(id)a0 isSuccess:(BOOL)a1;
- (void)didFinishPublishStoryWithAwemeModel:(id)a0 isSuccess:(BOOL)a1;
- (void)didChangeAweme:(id)a0 toVisibleScope:(long long)a1;

@end
