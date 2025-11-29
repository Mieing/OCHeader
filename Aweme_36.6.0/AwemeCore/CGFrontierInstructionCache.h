@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CGFrontierInstructionCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)cacheInstruction:(id)a0 forIdentifier:(id)a1;
- (id)removeInstructionsWithIdentifier:(id)a0;
- (void)flushAllInstructions:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
