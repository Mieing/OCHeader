@class NSString, NSArray, TTrackerHAStorage, NSObject, TTrackerHAUploader;
@protocol OS_dispatch_queue;

@interface TTrackerHADispacher : NSObject <BDTrackerPlugin, BDTrackerEventObserver, TTrackerPriorityObserver> {
    double flushInterval;
    double lastestFlushTime;
    BOOL isBusy;
    NSObject<OS_dispatch_queue> *ha_dispacher_event_queue;
    NSArray *eventsToForward;
    TTrackerHAUploader *uploader;
}

@property (retain, nonatomic) TTrackerHAStorage *storage;
@property (nonatomic) long long configVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pluginVersion;
+ (id)plugin;

- (void)onEventStored:(id)a0;
- (void)_saveEvent:(id)a0 type:(id)a1;
- (id)filePath;
- (id)observerQueue;
- (void).cxx_destruct;
- (void)apply:(id)a0;
- (void)handleResponse:(id)a0;
- (id)init;
- (void)commonInit;
- (void)reset;
- (void)loadData;

@end
