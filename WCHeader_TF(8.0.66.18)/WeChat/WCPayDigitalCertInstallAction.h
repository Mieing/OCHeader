@class NSString, WCPayDigitalCertInstallCrtWording;

@interface WCPayDigitalCertInstallAction : NSObject

@property (retain, nonatomic) NSString *m_balanceMobile;
@property (nonatomic) int m_isHintCrt;
@property (nonatomic) int m_isGenCert;
@property (nonatomic) int m_isIgnoreCrt;
@property (nonatomic) int m_noResetMobile;
@property (retain, nonatomic) WCPayDigitalCertInstallCrtWording *m_crt_wording;

+ (id)GenFromDictionary:(id)a0;

- (BOOL)showDigitalInstallLayout;
- (BOOL)noResetMobile;
- (void).cxx_destruct;

@end
