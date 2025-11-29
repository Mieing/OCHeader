@class NSString;

@interface IESIMVoipKVOMessageListLifeCycleComponent : AWEIMComponentBase <IESIMMessageListLifeCycleAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)msgList_viewWillDisappear;
- (void)msgList_viewWillAppear;

@end
