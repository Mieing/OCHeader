@class NSString;

@interface AWEIMLeftContactsClientChatListDataController : AWEIMChatListDataControllerBase <AWEUnreadGroupDemoteProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onDemoteStateChangedWithDemoteSet:(id)a0 unDemoteSet:(id)a1;
- (BOOL)iesim_shouldFilterUnreadCountReportForConversation:(id)a0 useConvLastMsgCreateTime:(BOOL)a1;
- (id)createChatManager;
- (void)customizeConfig:(id)a0;
- (BOOL)iesim_shouldFilterConversation:(id)a0 chatDataControllerType:(long long)a1 filterReason:(id *)a2;
- (BOOL)iesim_shouldFilterSDKConversation:(id)a0 settingInfo:(id)a1 coreInfo:(id)a2 chatDataControllerType:(long long)a3;
- (BOOL)iesim_shouldFilterUnreadCountReportForConversation:(id)a0;
- (BOOL)iesim_shouldIgnoreFilterCacheForConversation:(id)a0;
- (id)init;
- (void)dealloc;

@end
