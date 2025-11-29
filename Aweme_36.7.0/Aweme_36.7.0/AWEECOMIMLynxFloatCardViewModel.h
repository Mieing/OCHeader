@class AWEECOMIMCharDetailFloatCardModel;
@protocol AWEECOMIMPaasConversationBridgeProtocol;

@interface AWEECOMIMLynxFloatCardViewModel : AWEECOMIMLynxViewViewModel

@property (retain, nonatomic) AWEECOMIMCharDetailFloatCardModel *floatCardModel;
@property (retain, nonatomic) id<AWEECOMIMPaasConversationBridgeProtocol> conversation;

- (id)lynxCardSchema;
- (id)lynxScheme;
- (id)initWithFloatCardModel:(id)a0 conversation:(id)a1;
- (id)_buildDynamicPatch;
- (id)_buildClientData;
- (BOOL)_bulletViewAlreadyInReusePool;
- (void).cxx_destruct;
- (id)cardType;

@end
