@interface AWENoticeSwiftImpl.InteractionNoticeModuleServiceImpl : HTSService <AWEInteractionNoticeModuleService>

- (id)getInteractNoticeGroupManager;
- (long long)getVideoCoverStateWithAwemeModel:(id)a0;
- (id)getNewInteractionNoticeViewController;
- (id)getNewInteractionNoticeViewControllerForContainer:(id)a0;
- (void)setupSubCategoryCache;
- (void)clearAllNoticeListCache;
- (void)updateFansListCountCheckersWithCount:(long long)a0;
- (void)trackFansListCountConsistencyWithCount:(long long)a0;
- (void)aweNoticeTrackLongConnectionNoticeArrived:(id)a0;
- (id)getUnreadMarkDisplayedStorage;
- (id)init;

@end
