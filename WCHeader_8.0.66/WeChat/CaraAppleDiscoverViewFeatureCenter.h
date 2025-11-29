@class NSString;

@interface CaraAppleDiscoverViewFeatureCenter : NSObject <CaraNativeDiscoverViewFeatureCenterBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)findFriendEntryViewController;
- (int)unreadAtDiscover;
- (BOOL)badgeAtDiscover;
- (int)unreadAtMomentsCell;
- (BOOL)badgeAtMomentsCell;
- (int)unreadAtTopStoriesCell;
- (BOOL)badgeAtTopStoriesCell;
- (BOOL)badgeAtChannelsCell;
- (int)unreadAtChannelsCell;
- (BOOL)badgeAtLiveCell;
- (int)unreadAtLiveCell;
- (id)anchorOfBadgeAtLiveCell;
- (id)titleOfBadgeAtLiveCell;

@end
