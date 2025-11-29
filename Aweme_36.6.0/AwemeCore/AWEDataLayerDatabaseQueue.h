@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEDataLayerDatabaseQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)queueWithIdentifier:(id)a0;

- (void)after:(double)a0 executeBlock:(id /* block */)a1;
- (void)asyncExecuteBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
