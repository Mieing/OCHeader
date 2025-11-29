@class NSString, NSDictionary;
@protocol AWEECOMIMPaasConversationBridgeProtocol;

@interface AWEECOMIMFTSConversationSyncModel : NSObject

@property (retain, nonatomic) id<AWEECOMIMPaasConversationBridgeProtocol> paasConversation;
@property (copy, nonatomic) NSString *shopName;
@property (copy, nonatomic) NSString *shopIconURL;
@property (copy, nonatomic) NSDictionary *otherExtParams;

- (void).cxx_destruct;

@end
