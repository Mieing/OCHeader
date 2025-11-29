@class NSString, WalletMixSpGenprepayResp;

@interface WCPayPayAuthNativeCgiResp : NSObject

@property (nonatomic) unsigned int m_wxErrorType;
@property (retain, nonatomic) NSString *m_wxErrorMsg;
@property (nonatomic) unsigned int m_retCode;
@property (retain, nonatomic) NSString *m_retMsg;
@property (retain, nonatomic) NSString *m_reqKey;
@property (retain, nonatomic) NSString *m_appId;
@property (retain, nonatomic) NSString *m_appSource;
@property (retain, nonatomic) NSString *m_productId;
@property (retain, nonatomic) WalletMixSpGenprepayResp *m_walletMixSpGenprepayResp;

+ (id)GenFromDictionary:(id)a0 WithErrorType:(unsigned int)a1 ErrorMsg:(id)a2;

- (void).cxx_destruct;

@end
