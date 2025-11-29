@class NSArray, NSString;

@interface AWEStorageServiceMonitorMMKVHandler : NSObject <MMKVHandler, NunkiMessage>

@property (nonatomic) BOOL hmdTrackThread;
@property (nonatomic) BOOL hmdTrackEnable;
@property (copy, nonatomic) NSArray *recoverCRCList;
@property (copy, nonatomic) NSArray *recoverLengthList;
@property (nonatomic) BOOL nunkiMemoryWarningEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (unsigned long long)onMMKVCRCCheckFail:(id)a0;
- (unsigned long long)onMMKVFileLengthError:(id)a0;
- (void)didReceiveResourceNotification;
- (void)startNunkiHandler;
- (BOOL)isExistMMKV:(id)a0 path:(id)a1;
- (BOOL)isExistMMKV:(id)a0;
- (void).cxx_destruct;
- (void)startHandler;
- (void)dealloc;

@end
