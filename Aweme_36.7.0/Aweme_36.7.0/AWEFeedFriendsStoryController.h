@class NSString;

@interface AWEFeedFriendsStoryController : AWEBaseController <AWEFeedControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handlePlay25StoryNotification:(id)a0;
- (id)findNeedFilterStory25ItemsWithUID:(id)a0 deduplicateInSameFeed:(BOOL)a1 playFromFamiliarFeed:(BOOL)a2 awemeID:(id)a3;
- (void)trackFriendDuplicateFilterWithEnterFrom:(id)a0 duplicateID:(id)a1 comeFrom:(id)a2;
- (void)play;
- (void)viewDidLoad;

@end
