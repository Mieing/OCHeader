@protocol AWEECOMIMPaasKVStoreProtocol;

@interface AWEECOMIMChatDetailUICacheUtil : NSObject

@property (retain, nonatomic) id<AWEECOMIMPaasKVStoreProtocol> kvStore;

- (id)cacheKeyWithEncodedShopId:(id)a0 pigeonBizType:(id)a1 aggregatesType:(id)a2;
- (void)cacheChatDetailWithModel:(id)a0;
- (id)uiModelWithEncodedShopId:(id)a0 pigeonBizType:(id)a1 aggregatesType:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
