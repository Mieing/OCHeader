@class NSString, AWEECOMIMChatSerachGoodsFetchResultItemModel;
@protocol AWEECOMIMPaasMessageBridgeProtocol;

@interface AWEECOMIMChatSerachListGoodsCellModel : NSObject <AWEECOMIMChatSerachListCellModelProtocol>

@property (retain, nonatomic) id<AWEECOMIMPaasMessageBridgeProtocol> msg;
@property (retain, nonatomic) AWEECOMIMChatSerachGoodsFetchResultItemModel *goodsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)otherTrackParams;
- (void).cxx_destruct;
- (long long)cellType;

@end
