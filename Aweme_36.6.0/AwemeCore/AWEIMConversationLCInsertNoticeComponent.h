@class NSString;

@interface AWEIMConversationLCInsertNoticeComponent : AWEIMComponentBase <AWEIMLCPushMessageAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewWillDisappear;
- (void)didReceivePushMessage:(id)a0;
- (void)insertNoticeWithPushInsertNoticeResponse:(id)a0;
- (id)convertPBWithPushInsertNoticeResponse:(id)a0;

@end
