@class NSString, NSMutableArray;
@protocol WCDeviceJSApiBatchSearchLogicHelpDelegate;

@interface WCDeviceJSApiBatchSearchLogicHelp : MMObject <IWCDeviceBrandMgrExt> {
    NSString *_brandUserName;
    NSMutableArray *_batchSearchRunningQueue;
    NSMutableArray *_batchWaitingQueue;
    NSMutableArray *_failedSearchedQueue;
    BOOL _batchSearchDeviceRunning;
}

@property (weak, nonatomic) id<WCDeviceJSApiBatchSearchLogicHelpDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBrandUserName:(id)a0;
- (void)removeAllSearchDevice;
- (void)addDevice:(id)a0;
- (void)checkBatchSearchDeviceWaitingQueue;
- (void)forceBatchSearchDevice:(id)a0;
- (id)getRunningDeviceScanExt:(id)a0;
- (void)onBatchSearchWCDevice:(id)a0 Scene:(int)a1 Error:(int)a2;
- (void).cxx_destruct;

@end
