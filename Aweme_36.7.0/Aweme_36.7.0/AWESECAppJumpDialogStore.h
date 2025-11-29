@class NSObject, AWESECAppJumpDialog, DUXLoadingToast;
@protocol OS_dispatch_queue, AWEStorageServiceKVInterface;

@interface AWESECAppJumpDialogStore : NSObject {
    NSObject<OS_dispatch_queue> *_diskQueue;
}

@property (retain, nonatomic) id<AWEStorageServiceKVInterface> store;
@property (weak, nonatomic) AWESECAppJumpDialog *currentShowDialog;
@property (weak, nonatomic) DUXLoadingToast *currentLoadingToast;

+ (id)shared;

- (void)clearEventInDisk;
- (void)dialogTrack:(id)a0;
- (void)eventAppLogTrack:(id)a0;
- (void)checkLatestEventAndReport;
- (void).cxx_destruct;
- (id)init;
- (void)saveEventToDisk:(id)a0;

@end
