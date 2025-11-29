@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ConcurrentDictionary : NSObject {
    NSMutableDictionary *_dictionary;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)put:(id)a0 forValue:(id)a1;
- (id)get:(id)a0;
- (void)remove:(id)a0;
- (BOOL)has:(id)a0;
- (id)take:(id)a0;
- (void).cxx_destruct;

@end
