@class NSString, NSArray;
@protocol AWEECOMIMPaasMessageBridgeProtocol;

@interface AWEECOMIMChatSerachListMsgCellModel : NSObject <AWEECOMIMChatSerachListCellModelProtocol>

@property (retain, nonatomic) id<AWEECOMIMPaasMessageBridgeProtocol> msg;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSArray *cellModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
