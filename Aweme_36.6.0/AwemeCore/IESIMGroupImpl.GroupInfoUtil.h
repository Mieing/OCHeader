@interface IESIMGroupImpl.GroupInfoUtil : HTSService <IESIMGroupInfoUtil>

- (id)groupNumberForCon:(id)a0;
- (BOOL)isAvatarChangedForCon:(id)a0;
- (id)avatarUrlForCon:(id)a0;
- (void)setIcon:(id)a0 ext:(id)a1 ofConversation:(id)a2 completion:(id /* block */)a3;
- (void)uploadAvatar:(id)a0 completion:(id /* block */)a1;
- (BOOL)isNameChangedForCon:(id)a0;
- (void)hasGroupsWithCategories:(id)a0 maxCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)hasGroupsWithCheckBlock:(id /* block */)a0 maxCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)init;

@end
