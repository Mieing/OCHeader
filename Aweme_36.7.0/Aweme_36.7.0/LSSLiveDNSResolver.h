@class NSObject;
@protocol OS_dispatch_queue;

@interface LSSLiveDNSResolver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)getLocalDNSIPList:(id)a0 completion:(id /* block */)a1;
- (id)getIPList:(id)a0 dnsMode:(unsigned long long)a1;
- (void)getIPList:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
