@class TTVideoEngineCFHostDNS, TTVideoEngineHTTPDNS, NSString, TTVideoEngineDNSBase, NSArray;
@protocol TTVideoEngineDNSProtocol;

@interface TTVideoEngineDNSParser : NSObject <TTVideoEngineDNSProtocol, TTVideoEngineDNSBaseProtocol>

@property (retain, nonatomic) TTVideoEngineCFHostDNS *localDNS;
@property (retain, nonatomic) TTVideoEngineHTTPDNS *httpDNS;
@property (retain, nonatomic) TTVideoEngineDNSBase *currentDNS;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL hasRetry;
@property (nonatomic) long long index;
@property (nonatomic) BOOL ipFromCache;
@property (nonatomic) BOOL hasRecAndExpired;
@property (weak, nonatomic) id<TTVideoEngineDNSProtocol> delegate;
@property (copy, nonatomic) NSString *hostname;
@property (nonatomic) BOOL isUseDnsCache;
@property (nonatomic) BOOL isForceReparse;
@property (nonatomic) long long expiredTimeSeconds;
@property (retain, nonatomic) NSArray *parserIndex;
@property (nonatomic) long long networkType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setHTTPDNSServerIP:(id)a0;

- (void)dnsParseAsync;
- (void)parser:(id)a0 didFinishWithAddress:(id)a1 error:(id)a2;
- (BOOL)isDelegateValid;
- (void)setIsHTTPDNSFirst:(BOOL)a0;
- (void)setIsDnsType:(long long)a0 backupDns:(long long)a1;
- (void)setForceReparse;
- (id)getTypeStr;
- (void).cxx_destruct;
- (id)initWithHostname:(id)a0;
- (void)start;
- (void)cancel;

@end
