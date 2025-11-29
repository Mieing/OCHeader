@class NSLock;

@interface LSSLiveLocalDNSResolver : NSObject

@property (retain, nonatomic) NSLock *lock;

- (id)resolveIPListWith:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
