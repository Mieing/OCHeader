@class NSString;

@interface WCPayCreditPayAuthenResponseStruct : NSObject

@property (retain, nonatomic) NSString *m_nsSessionKey;
@property (nonatomic) BOOL m_bZXBankUser;
@property (retain, nonatomic) NSString *m_nsPhoneNumMask;
@property (nonatomic) BOOL m_bNeedBindCard;

- (void).cxx_destruct;

@end
