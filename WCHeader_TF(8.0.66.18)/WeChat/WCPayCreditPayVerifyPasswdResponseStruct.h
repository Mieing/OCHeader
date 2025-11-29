@class NSString;

@interface WCPayCreditPayVerifyPasswdResponseStruct : NSObject

@property (retain, nonatomic) NSString *m_nsSessionKey;
@property (retain, nonatomic) NSString *m_nsNameMask;
@property (retain, nonatomic) NSString *m_nsIDNumberMask;
@property (nonatomic) BOOL m_bNeedFillAllInfo;

- (void).cxx_destruct;

@end
