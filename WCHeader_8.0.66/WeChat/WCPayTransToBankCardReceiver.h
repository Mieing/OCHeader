@class NSString, WCPayTransBankItem;

@interface WCPayTransToBankCardReceiver : MMObject

@property (retain, nonatomic) NSString *m_nsRemarkName;
@property (retain, nonatomic) NSString *m_nsUserTrueName;
@property (retain, nonatomic) NSString *m_nsEncryptedUsrName;
@property (retain, nonatomic) NSString *m_nsBankcardSeqNo;
@property (retain, nonatomic) NSString *m_nsBankcardEncNo;
@property (retain, nonatomic) NSString *m_nsBankcardTailNo;
@property (retain, nonatomic) WCPayTransBankItem *m_bankItem;

- (id)initWithTransferRecord:(id)a0;
- (void).cxx_destruct;

@end
