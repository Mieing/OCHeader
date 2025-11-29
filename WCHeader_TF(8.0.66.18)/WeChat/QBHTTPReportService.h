@class NSString, NSMutableDictionary;

@interface QBHTTPReportService : NSObject {
    unsigned long long _reportQVCount;
    unsigned long long _reportTDNSCount;
    unsigned long long _reportSNDSCount;
    unsigned long long _bakReportQVCount;
    unsigned long long _bakReportTDNSCount;
    unsigned long long _bakReportSNDSCount;
    NSString *_desKey;
    NSString *_rsaKey;
}

@property (retain) NSMutableDictionary *subHostInfo;
@property (retain) NSMutableDictionary *tempSubHostInfo;

+ (id)sharedInstance;
+ (void)statisticsPVWithHost:(id)a0 Error:(id)a1;

- (id)init;
- (void)generateKey;
- (id)encryptData:(id)a0;
- (id)decryptData:(id)a0;
- (void)onDoReportNotification:(id)a0;
- (void)dealloc;
- (void)onDoIncreaseSTValueNotification:(id)a0;
- (id)serviceUrl;
- (void)resetCounts;
- (void)restoreCounts;
- (id)getPostData:(BOOL)a0;
- (id)validSubPVStringFromDic:(id)a0;
- (void)handleRespData:(id)a0;
- (void)handleRespError:(id)a0;
- (void).cxx_destruct;

@end
