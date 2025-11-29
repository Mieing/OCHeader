@class TVLHTTPDNSParser, NSString, TVLLocalDNSParser, TVLBaseDNSParser;
@protocol TVLDNSParserDelegate, TVLDNSCaching;

@interface TVLDNSParser : NSObject <TVLDNSParserDelegate, TVLDNSParsing> {
    TVLHTTPDNSParser *_httpDNSParser;
    TVLLocalDNSParser *_localDNSParser;
    TVLBaseDNSParser *_currentDNSParser;
    BOOL _canceled;
}

@property (weak, nonatomic) id<TVLDNSCaching> cache;
@property (weak, nonatomic) id<TVLDNSParserDelegate> delegate;
@property (copy, nonatomic) NSString *hostname;
@property (nonatomic, getter=shouldTryCachedAddresses) BOOL tryCachedAddresses;
@property (nonatomic, getter=isPreferredToHTTPDNS) BOOL preferredToHTTPDNS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestDNSServerWithCompletion:(id /* block */)a0;

- (void)parser:(id)a0 didGetRecordWithHostname:(id)a1 parsedAddresses:(id)a2 timeToLive:(double)a3;
- (void)parser:(id)a0 didFinishParsingHostname:(id)a1 withParesedAddresses:(id)a2 error:(id)a3;
- (void).cxx_destruct;
- (id)initWithHostname:(id)a0;
- (void)start;
- (void)cancel;

@end
