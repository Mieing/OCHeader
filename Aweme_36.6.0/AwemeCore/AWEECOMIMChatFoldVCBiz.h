@class NSString, NSArray, AWEECOMShopDetailModel, AWEECOMIMChatDetailMessageCacheManager, AWEECOMIMFoldInfoModel;
@protocol AWEECOMIMPaasConversationBridgeProtocol, AWEECOMIMMsgCellDelegate;

@interface AWEECOMIMChatFoldVCBiz : NSObject

@property (readonly, nonatomic) AWEECOMIMFoldInfoModel *foldInfo;
@property (readonly, weak, nonatomic) id<AWEECOMIMMsgCellDelegate> msgCellDelegate;
@property (readonly, nonatomic) id<AWEECOMIMPaasConversationBridgeProtocol> curConversation;
@property (readonly, nonatomic) AWEECOMIMChatDetailMessageCacheManager *messageCacheManager;
@property (readonly, nonatomic) AWEECOMShopDetailModel *shopInfoModel;
@property (readonly, copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSArray *cellModelArr;

- (void)setupWithEntryModel:(id)a0;
- (void).cxx_destruct;

@end
