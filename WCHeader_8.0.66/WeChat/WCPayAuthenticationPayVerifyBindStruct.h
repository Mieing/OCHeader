@class NSString;

@interface WCPayAuthenticationPayVerifyBindStruct : NSObject

@property (nonatomic) unsigned int m_flag;
@property (nonatomic) unsigned int m_uiPayScene;
@property (nonatomic) unsigned int m_uiPayChannel;
@property (retain, nonatomic) NSString *m_payPassword;
@property (retain, nonatomic) NSString *m_payKey;
@property (retain, nonatomic) NSString *m_payToken;
@property (retain, nonatomic) NSString *m_verifySMS;
@property (nonatomic) unsigned int ignore_bind;

- (void).cxx_destruct;

@end
