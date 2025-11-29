@class NSArray, NSString;

@interface WANetworkConfigBase : NSObject <WANetworkConfigBaseDataSource> {
    NSString *_appID;
    unsigned long long _appVersion;
}

@property (retain, nonatomic) NSArray *arrDomainList;
@property (retain, nonatomic) NSString *httpHeaderMode;
@property (retain, nonatomic) NSArray *arrHttpHeaderBlackList;
@property (retain, nonatomic) NSArray *arrHttpHeaderWhiteList;
@property (nonatomic) unsigned int timeoutMS;
@property (retain, nonatomic) NSString *httpHeaderReferer;
@property (retain, nonatomic) NSString *mmUserAgent;
@property (retain, nonatomic) NSArray *arrCertData;
@property (nonatomic) BOOL skipPortCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validateChallenge:(id)a0 withCertificateDataArray:(id)a1;
+ (id)certificateDataTrustChainForServerTrust:(struct __SecTrust { } *)a0;

- (id)initWithAppID:(id)a0 appVersion:(unsigned long long)a1 context:(id)a2;
- (int)checkIp:(id)a0;
- (BOOL)checkDomain:(id)a0;
- (BOOL)checkDomainList:(id)a0;
- (id)filterHttpHeader:(id)a0;
- (BOOL)validateChallenge:(id)a0;
- (void)loadConfig:(id)a0;
- (id)configDomainList;
- (unsigned int)configMaxTimeoutMS;
- (unsigned int)configTimeoutMS;
- (unsigned int)configDefaultTimeoutMS;
- (void).cxx_destruct;

@end
