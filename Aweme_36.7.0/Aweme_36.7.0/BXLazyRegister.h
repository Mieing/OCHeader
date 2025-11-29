@class NSObject;
@protocol OS_dispatch_queue;

@interface BXLazyRegister : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *infoDispatchQueue;

+ (id)sharedInstance;

- (void)evaluateLazyRegister;
- (void).cxx_destruct;
- (id)init;

@end
