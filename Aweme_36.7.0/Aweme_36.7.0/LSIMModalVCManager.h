@interface LSIMModalVCManager : NSObject

+ (id)noticeModalVCWithNotice:(id)a0;
+ (id)merchantPersonalModalVCWithMerchantMember:(id)a0 makeConversationBlock:(id /* block */)a1;
+ (id)commonIMModalWithPageHeight:(double)a0 content:(id)a1;
+ (id)settingsMoreModalVCWithConversation:(id)a0 leaveClickBlock:(id /* block */)a1;

@end
