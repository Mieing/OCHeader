@class NSString, WCPayIdKeyRegularReporter, NSDictionary;
@protocol WCPayGenDigitalCertCgiDelegate;

@interface WCPayGenDigitalCertCgi : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCPayGenDigitalCertCgiDelegate> m_delegate;
@property (retain, nonatomic) NSString *m_crtCsr;
@property (retain, nonatomic) NSString *m_snSalt;
@property (retain, nonatomic) NSString *m_deviceName;
@property (retain, nonatomic) NSString *m_deviceOS;
@property (retain, nonatomic) NSString *m_crtDeviceId;
@property (retain, nonatomic) WCPayIdKeyRegularReporter *m_cgiReporter;
@property (retain, nonatomic) WCPayIdKeyRegularReporter *m_controlReporter;
@property (nonatomic) unsigned int m_payScene;
@property (nonatomic) int m_type;
@property (retain, nonatomic) NSString *m_trueName;
@property (retain, nonatomic) NSString *m_idNo;
@property (nonatomic) int m_idType;
@property (retain, nonatomic) NSString *m_crtSms;
@property (retain, nonatomic) NSString *m_reqKey;
@property (retain, nonatomic) NSString *cre_tail;
@property (retain, nonatomic) NSString *m_token;
@property (nonatomic) unsigned int cert_encrypt_type;
@property (retain, nonatomic) NSDictionary *m_userInfo;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)callErrorDelegate;
- (void)genInternalInfo;
- (void)startRequest;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
