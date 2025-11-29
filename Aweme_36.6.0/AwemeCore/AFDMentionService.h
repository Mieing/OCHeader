@class NSString;

@interface AFDMentionService : HTSService <AFDMentionService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userPickerContactDatasourceWithScene:(long long)a0;
- (id)mentionAilabDefaultUserListDataController;
- (void)fetchSearchDataWithGroupId:(id)a0 scene:(long long)a1 completion:(id /* block */)a2;
- (void)fetchSearchSugWithContext:(id)a0 completion:(id /* block */)a1;
- (id)AFDMentionSugContextWithQuery:(id)a0 scene:(long long)a1 userArray:(id)a2;
- (id)mentionFeedBottomBar;
- (id)mentionFeedIMBottomBar;
- (Class)unreadMentionManager;

@end
