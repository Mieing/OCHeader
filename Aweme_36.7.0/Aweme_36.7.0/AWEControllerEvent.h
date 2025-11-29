@class NSPointerArray, AWEControllerEventDistributor, NSLock;

@interface AWEControllerEvent : NSObject

@property (retain, nonatomic) NSPointerArray *listeners;
@property (retain, nonatomic) AWEControllerEventDistributor *distributor;
@property (retain, nonatomic) NSLock *lock;

- (id)getNonNullListens;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterListener:(id)a0;
- (void)registerListener:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
