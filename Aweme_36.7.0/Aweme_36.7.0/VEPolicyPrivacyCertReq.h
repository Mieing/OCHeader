@interface VEPolicyPrivacyCertReq : IESMMObject

@property (retain, nonatomic) id startVideoPrivacyCert;
@property (retain, nonatomic) id startAudioPrivacyCert;

+ (id)sharedinstance;

- (id)getPrivacyCertWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
