@class NSMutableDictionary, NSDictionary, NSLock, NSObject;
@protocol OS_dispatch_semaphore;

@interface BUTNCNetwork : NSObject

@property (retain, nonatomic) NSMutableDictionary *requestMap;
@property (retain, nonatomic) NSMutableDictionary *failDomains;
@property (retain, nonatomic) NSMutableDictionary *lastTimeIntervals;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *requestSemaphore;
@property (retain, nonatomic) NSMutableDictionary *persistences;
@property (retain, nonatomic) NSMutableDictionary *domains;
@property (copy) NSDictionary *cur_domains;

+ (id)sharedInstance;

- (void)handleFailRequest:(id)a0;
- (void)updateDomains:(id)a0 withAppKey:(id)a1;
- (id)persistenceCrateWithAppKey:(id)a0;
- (BOOL)recordFailCountDomain:(id)a0;
- (id)domainsWithAppKey:(id)a0;
- (void)getDomainsWithConfig:(id)a0 andCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
