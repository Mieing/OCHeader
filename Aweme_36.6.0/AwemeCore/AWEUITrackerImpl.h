@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEUITrackerImpl : HTSService <AWEUITracker, AWEUITrackerConfig, HTSService> {
    void *_trackQueueTag;
    void *_trackQueueContext;
    NSObject<OS_dispatch_queue> *_trackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)track:(id)a0 event:(id)a1 params:(id)a2;
- (void)_track:(id)a0 event:(id)a1 params:(id)a2;
- (BOOL)enable;
- (void)async:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
