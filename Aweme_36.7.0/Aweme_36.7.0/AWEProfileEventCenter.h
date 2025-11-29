@class NSMapTable;

@interface AWEProfileEventCenter : NSObject

@property (retain, nonatomic) NSMapTable *eventToPublisherTable;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (void)subscribeEvent:(id)a0 subscriber:(id)a1;
- (id)eventPublisher:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
