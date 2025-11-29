@class NSString;

@interface AFDUserPanelService : HTSService <AFDUserPanelService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sortUsers:(id)a0 completeHandler:(id /* block */)a1;
- (id)allMutualFollowUsers;
- (void)clearCache;

@end
