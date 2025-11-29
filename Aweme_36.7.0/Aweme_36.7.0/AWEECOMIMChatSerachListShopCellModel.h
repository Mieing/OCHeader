@class NSString, NSDictionary;
@protocol AWEECOMIMPaasConversationBridgeProtocol;

@interface AWEECOMIMChatSerachListShopCellModel : NSObject <AWEECOMIMChatSerachListCellModelProtocol>

@property (retain, nonatomic) id<AWEECOMIMPaasConversationBridgeProtocol> conv;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSDictionary *otherExtParams;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } highlightRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
