@class QBDNSUDPResolver, QBDNSCache, NSDate, NSObject, QBDNSHTTPDESResolver;
@protocol OS_dispatch_queue;

@interface QBDNSManager : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _dnsEnabled;
    long long actualErrorDNSCount;
    NSDate *actualErrorDNSDate;
    NSDate *_detectServerDate;
    BOOL _dnsServerEnabled;
    QBDNSCache *_cache;
    QBDNSUDPResolver *_defaultResolver;
    QBDNSHTTPDESResolver *_httpDNSResolver;
}

+ (id)sharedInstance;

- (id)qbDNSRequest:(id)a0 cached:(BOOL)a1;
- (void)storeCache;
- (void)handleActualErrorDNS:(long long)a0;
- (void)detectDNSStatus;
- (void)handleResponse:(id)a0;
- (void)handleBadRequest:(id)a0 status:(long long)a1;
- (id)query:(id)a0 status:(long long)a1;
- (id)queryInternalWithDomain:(id)a0 resolver:(id)a1 detect:(BOOL)a2;
- (id)init;
- (void)IBSDNSSettingChanged:(id)a0;
- (long long)badDateInterVal;
- (BOOL)isHTTPDNSEnabled;
- (void)loadData;
- (long long)isNetworkChanged:(BOOL)a0;
- (void).cxx_destruct;

@end
