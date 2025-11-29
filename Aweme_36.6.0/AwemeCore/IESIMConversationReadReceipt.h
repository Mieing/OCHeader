@class NSString, TIMXOConversationReadReceiptCallback;

@interface IESIMConversationReadReceipt : NSObject <IESIMConversationReadReceiptProtocol>

@property (retain, nonatomic) TIMXOConversationReadReceiptCallback *callbackObj;
@property (nonatomic) double requestThrottle;
@property (nonatomic) long long convIDCacheLength;
@property BOOL featureEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createReadReceiptRequestModel;
- (void)reloadReadReceiptWithModels:(id)a0 requestFrom:(id)a1 completion:(id /* block */)a2;
- (id)p_SDKConversationReadReceipt;
- (void)addWeakReadReceiptCallbackFromServer:(id /* block */)a0;
- (double)requestThrottle;
- (void)setRequestThrottle:(double)a0;
- (long long)convIDCacheLength;
- (void)setConvIDCacheLength:(long long)a0;
- (id)createReadReceiptReponseModel;
- (void).cxx_destruct;

@end
