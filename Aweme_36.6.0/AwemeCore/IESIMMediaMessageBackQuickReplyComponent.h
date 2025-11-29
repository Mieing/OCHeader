@class NSString;
@protocol AWEIMMessageTableViewInterface;

@interface IESIMMediaMessageBackQuickReplyComponent : AWEIMComponentBase <IESIMMessageListLifeCycleAction>

@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

@end
