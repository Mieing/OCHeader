@class NSString;

@interface WCPayQueryWalletResponse : NSObject

@property (nonatomic) unsigned int m_errCode;
@property (retain, nonatomic) NSString *m_errMsg;
@property (retain, nonatomic) NSString *m_walletUrl;

- (void).cxx_destruct;

@end
