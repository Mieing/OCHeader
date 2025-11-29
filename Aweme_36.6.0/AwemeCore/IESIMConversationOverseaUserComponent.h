@class NSString;

@interface IESIMConversationOverseaUserComponent : AWEIMComponentBase <AWEIMMessageTableViewAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 cell:(id)a2;

@end
