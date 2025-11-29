@class NSString;

@interface WCPayOfflinePayChangeLimitFeeRequestStruct : NSObject

@property (retain, nonatomic) NSString *m_nsPassword;
@property (retain, nonatomic) NSString *m_nsOptionControl;
@property (nonatomic) long long m_uiChangeFee;
@property (retain, nonatomic) NSString *m_nsVerifyCode;
@property (retain, nonatomic) NSString *m_nsBindSerial;
@property (retain, nonatomic) NSString *m_nsBankType;
@property (retain, nonatomic) NSString *m_nsBindCardTail;
@property (nonatomic) BOOL m_bRepeatSend;

- (id)init;
- (void).cxx_destruct;

@end
