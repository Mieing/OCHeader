@class NSString, NSData;

@interface WCPayCheckPayPwdByTokenRequest : NSObject

@property (retain, nonatomic) NSString *m_nsPayPwd;
@property (retain, nonatomic) NSString *m_nsToken;
@property (nonatomic) BOOL m_bResend;
@property (retain, nonatomic) NSString *m_bizInfo;
@property (copy, nonatomic) NSString *m_useTouch;
@property (nonatomic) NSData *m_fingerData;
@property (retain, nonatomic) NSString *m_biopayv2authReq;

- (void).cxx_destruct;

@end
