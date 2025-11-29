@class NSString, AWEECOMShopDetailModel, AWEECOMIMChatDetailMessageCacheManager, AWEECOMIMFoldInfoModel;
@protocol AWEECOMIMPaasConversationBridgeProtocol, AWEECOMIMMsgCellDelegate;

@interface AWEECOMIMChatFoldEntryModel : NSObject

@property (retain, nonatomic) AWEECOMIMFoldInfoModel *foldInfo;
@property (weak, nonatomic) id<AWEECOMIMMsgCellDelegate> msgCellDelegate;
@property (retain, nonatomic) id<AWEECOMIMPaasConversationBridgeProtocol> curConversation;
@property (retain, nonatomic) AWEECOMIMChatDetailMessageCacheManager *messageCacheManager;
@property (retain, nonatomic) AWEECOMShopDetailModel *shopInfoModel;
@property (copy, nonatomic) NSString *pigeonBizType;

- (void).cxx_destruct;

@end
