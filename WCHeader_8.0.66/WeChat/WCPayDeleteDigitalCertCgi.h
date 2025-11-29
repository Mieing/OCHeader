@class WCPayIdKeyRegularReporter, NSString;
@protocol WCPayDeleteDigitalCertCgiDelegate;

@interface WCPayDeleteDigitalCertCgi : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCPayDeleteDigitalCertCgiDelegate> m_delegate;
@property (retain, nonatomic) WCPayIdKeyRegularReporter *m_cgiReporter;
@property (retain, nonatomic) NSString *m_crtNo;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)callErrorDelegate;
- (void)startRequest;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)localCertDeleteWithCertNo:(id)a0;
- (void).cxx_destruct;

@end
