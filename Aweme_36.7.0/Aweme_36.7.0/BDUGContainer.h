@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDUGContainer : NSObject

@property (retain, nonatomic) NSMutableDictionary *codes;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

+ (id)stringKeyForProtocol:(id)a0;
+ (id)sharedInstance;

- (void)setCode:(id)a0 forKey:(id)a1;
- (void)setClass:(Class)a0 forProtocol:(id)a1;
- (void)setObject:(id)a0 forProtocol:(id)a1;
- (id)createObjectForProtocol:(id)a0;
- (id)optionalObjectForProtocol:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)codeForKey:(id)a0;

@end
