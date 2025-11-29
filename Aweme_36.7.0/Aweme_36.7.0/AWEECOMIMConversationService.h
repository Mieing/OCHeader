@class NSString;

@interface AWEECOMIMConversationService : HTSService <AWEECOMIMConversationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createMessageDataModel;
- (id)createConversationDataModel;
- (id)calBizUnreadCountForConversation:(id)a0;

@end
