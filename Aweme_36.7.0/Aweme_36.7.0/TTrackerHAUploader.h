@class NSString, TTrackerHAStorage, NSObject;
@protocol OS_dispatch_queue;

@interface TTrackerHAUploader : NSObject <BDTrackerPriorityTimer> {
    NSObject<OS_dispatch_queue> *ha_dispacher_upload_queue;
}

@property (nonatomic) long long priority;
@property (nonatomic) double interval;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *path;
@property (weak, nonatomic) TTrackerHAStorage *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)timerInterval;
- (void)_requestForURL:(id)a0 postParams:(id)a1;
- (void)upload:(id)a0 options:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)uploadQueue;
- (void)onTimer;

@end
