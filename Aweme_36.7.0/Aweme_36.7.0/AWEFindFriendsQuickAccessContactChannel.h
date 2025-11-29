@interface AWEFindFriendsQuickAccessContactChannel : AWEFindFriendsQuickAccessChannel

+ (id)type;

- (BOOL)canShow;
- (void)onSelected;
- (BOOL)canShowContactWhenLimitedStatus;
- (id)showOnceRule;

@end
