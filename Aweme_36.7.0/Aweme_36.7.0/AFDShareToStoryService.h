@class NSString;

@interface AFDShareToStoryService : HTSService <AFDShareToStoryService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)diableShareToStory;
- (BOOL)forwardPopoverUpgrateWithAweme:(id)a0;
- (BOOL)enableSyncPlayTime:(id)a0;
- (double)forwardAwemePlayTime:(id)a0;
- (id)forwardAwemeBgColor:(id)a0;
- (BOOL)shareAwemePlayDisable:(id)a0;
- (id)forwardAwemePopoverContext:(id)a0;
- (BOOL)forwardAwemeRefactorUseOriginAweme:(id)a0;
- (BOOL)enableShareAwemePlayerRefactorWithSharedAweme:(id)a0 referString:(id)a1;
- (id)createContentShareEditBottomViewWithIsMentionEnabled:(BOOL)a0 enterFrom:(id)a1;

@end
