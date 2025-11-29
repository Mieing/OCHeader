@interface AWEFollowUserListBaseSectionViewModel : AWERelationUserListBaseSectionViewModel

@property (readonly, nonatomic) long long defaultSort;

- (id)enterFrom;
- (void)onClickUnFollowUserOnProfileMenu:(id)a0 trackerParam:(id)a1;
- (BOOL)isFriends;
- (long long)type;
- (BOOL)isMine;

@end
