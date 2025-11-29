@class NSArray;

@interface TMNetworkDownlinkEncryptionHandler : NSObject {
    unsigned long long _failedCount;
}

@property (retain, nonatomic) NSArray *encryptionPathInfoList;
@property (nonatomic) unsigned long long failedCount;
@property (nonatomic) double decryptTimeoutPeriod;
@property (nonatomic) unsigned long long failedDowngradeNumber;
@property (nonatomic) unsigned long long alogSampleRate;

+ (void)start;
+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (id)encryptionListConfig;
- (void)asyncReportZdpLoadCert;
- (void)handleConfigUpdate;
- (id)needToEncryptionWithPath:(id)a0 host:(id)a1;
- (void)reportRequestEncryptionWithError:(id)a0 context:(id)a1;
- (void)asyncLoadCert;
- (void)asyncReportZdpCertEmpty;
- (BOOL)needEncrypted:(id)a0;
- (void)handleSpecialCase:(id)a0 context:(id)a1;
- (void)reportServerOrCertErrorWithCode:(id)a0 context:(id)a1 withLogid:(id)a2;
- (void)reportResonseError:(id)a0 context:(id)a1 withLogid:(id)a2;
- (void)reportTransmissionEncryptionWithActionResult:(id)a0 error:(id)a1 extraInfo:(id)a2 logid:(id)a3;
- (void)reportTransmissionEncryptionWithParams:(id)a0;
- (id)addEncryptionMarkInRequestWithContext:(id)a0;
- (id)decryptInResponseWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
