@class NSString;

@interface WCPayDeleteDigitalCertCgiResp : NSObject

@property (nonatomic) unsigned int m_wxErrorType;
@property (retain, nonatomic) NSString *m_wxErrorMsg;

+ (id)GenFromDictionary:(id)a0 WithErrorType:(unsigned int)a1 ErrorMsg:(id)a2;

- (id)init;
- (void).cxx_destruct;

@end
