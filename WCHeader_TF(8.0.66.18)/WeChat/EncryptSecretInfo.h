@class NSString;

@interface EncryptSecretInfo : NSObject <PBCoding, NSCoding>

@property (retain, nonatomic) NSString *m_nsTextStateEncryptSecret;
@property (retain, nonatomic) NSString *m_nsCommonEncryptSecret;
@property (retain, nonatomic) NSString *m_nsRecordEncryptSecret;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_nsTextStateEncryptSecret;
+ (void)PBArrayAdd_m_nsCommonEncryptSecret;
+ (void)PBArrayAdd_m_nsRecordEncryptSecret;
+ (void)initialize;

@end
