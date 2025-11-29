@class NSString;

@interface WCPayOverseaTransferOrderArgument : NSObject

@property (nonatomic) unsigned long long m_amount;
@property (retain, nonatomic) NSString *m_payNickname;
@property (retain, nonatomic) NSString *m_recvUsername;
@property (retain, nonatomic) NSString *m_recvNickname;
@property (retain, nonatomic) NSString *m_reason;
@property (nonatomic) int m_currency;

- (id)urlArgumentData;
- (void).cxx_destruct;

@end
