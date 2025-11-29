@class NSString;

@interface AWEGrouponC2FeedModuleService : HTSService <AWEGrouponC2FeedModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)lifeTabHasSmallLiveWindowWithPageType:(long long)a0;
- (id)lastVisibleCanInsertItemPathWithPageType:(long long)a0;
- (void)animateInsertContainerAwemeModel:(id)a0 index:(long long)a1 allowApendMax:(BOOL)a2 insertType:(unsigned long long)a3 pageType:(long long)a4;
- (void)createC2FeedWithPageContext:(id)a0;
- (id)c2FeedSectionWithPageType:(long long)a0;
- (id)getSectionLayoutConfigWithPageType:(long long)a0;
- (void)shouldShowSmallScreenWithRoomID:(id)a0 customSchema:(id)a1 scene:(long long)a2 pageType:(long long)a3 showComplete:(id /* block */)a4;
- (void)shouldShowSmallScreenWithRoomID:(id)a0 customSchema:(id)a1 scene:(long long)a2 smallLiveWindowTopPercent:(float)a3 pageType:(long long)a4 showComplete:(id /* block */)a5;
- (void)startAutoPlayType:(long long)a0 source:(long long)a1 pageType:(long long)a2;
- (void)restartAutoPlayWithPageType:(long long)a0;
- (void)pauseAutoPlayWithPageType:(long long)a0;
- (void)hideLiveSmallScreenWithPageType:(long long)a0;
- (id)feedVisibleCellsWithPageType:(long long)a0;

@end
