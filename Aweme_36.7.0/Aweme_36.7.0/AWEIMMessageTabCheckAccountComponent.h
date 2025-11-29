@class NSString;

@interface AWEIMMessageTabCheckAccountComponent : AWEIMComponentBase <AWEIMMessageTabChatDataAction>

@property (nonatomic) BOOL enableBelongErrorReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)didReloadChatList;
- (void)didFinishLoadFirstPageData;
- (void)p_checkConversation;

@end
