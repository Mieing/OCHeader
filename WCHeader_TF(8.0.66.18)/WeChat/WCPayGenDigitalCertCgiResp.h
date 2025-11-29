@class NSString, NSDictionary;

@interface WCPayGenDigitalCertCgiResp : NSObject

@property (nonatomic) unsigned int m_wxErrorType;
@property (retain, nonatomic) NSString *m_wxErrorMsg;
@property (retain, nonatomic) NSString *m_crtCrt;
@property (retain, nonatomic) NSString *m_crtNo;
@property (nonatomic) int m_crtEncryptType;
@property (nonatomic) unsigned int m_retCode;
@property (retain, nonatomic) NSString *m_retMsg;
@property (retain, nonatomic) NSDictionary *m_userInfo;

+ (id)GenFromDictionary:(id)a0 WithErrorType:(unsigned int)a1 ErrorMsg:(id)a2;

- (id)init;
- (void).cxx_destruct;

@end
