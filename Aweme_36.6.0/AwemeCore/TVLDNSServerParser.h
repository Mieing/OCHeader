@class NSLock, NSString, TVLDNSParser;

@interface TVLDNSServerParser : NSObject <TVLDNSParserDelegate> {
    TVLDNSParser *_parser;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } cacheMutex;
}

@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) BOOL didHasStartDNSParser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultParser;

- (void)parser:(id)a0 didCancelParsingHostname:(id)a1;
- (void)parser:(id)a0 didFinishParsingHostname:(id)a1 withParesedAddresses:(id)a2 error:(id)a3;
- (void)updateDNSServerIP;
- (void)requestDNSServerWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
