@class NSString, NSData;

@interface __DeviceInfo : NSObject

@property (nonatomic) long long m_did;
@property (retain, nonatomic) NSString *m_deviceId;
@property (retain, nonatomic) NSString *m_deviceType;
@property (retain, nonatomic) NSString *m_usrname;
@property (nonatomic) int m_authState;
@property (nonatomic) unsigned long long m_expireTime;
@property (nonatomic) unsigned long long m_blockTimeout;
@property (nonatomic) unsigned long long m_lastAuthTime;
@property (retain, nonatomic) NSData *m_sessionKey;
@property (retain, nonatomic) NSData *m_AESSessionKey;
@property (retain, nonatomic) NSData *m_sessionBuffer;
@property (nonatomic) short m_seq;
@property (nonatomic) int m_cryptMethod;

- (void).cxx_destruct;

@end
