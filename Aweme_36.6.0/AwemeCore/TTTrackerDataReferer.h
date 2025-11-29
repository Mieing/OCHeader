@class NSString, IRISConcurrentWrapper, NSDictionary, NSObject;
@protocol OS_dispatch_queue, IRISModelUserFlow;

@interface TTTrackerDataReferer : NSObject {
    NSObject<OS_dispatch_queue> *snapshot_upload_queue;
}

@property (nonatomic) BOOL autoReferEnabled;
@property (nonatomic) BOOL dataReferEnabled;
@property (nonatomic) BOOL autoEventEnabled;
@property (copy) NSString *url;
@property (retain, nonatomic) IRISConcurrentWrapper *snapshotCache;
@property BOOL isUploading;
@property (readonly) BOOL snapshotEnabled;
@property (retain, nonatomic) id<IRISModelUserFlow> userFlow;
@property (retain, nonatomic) NSDictionary *referData;

+ (void)startWithOptions:(id)a0;
+ (id)sharedInstance;

- (void)syncDataRefer:(id)a0 toEvent:(id)a1;
- (void)trackReferEvent:(id)a0 withUserInfo:(id)a1;
- (void)log:(unsigned long long)a0 message:(id)a1;
- (void)uploadSnapshot:(id)a0 withURL:(id)a1;
- (void)_uploadSnapshotIfNeed;
- (void).cxx_destruct;
- (id)init;

@end
