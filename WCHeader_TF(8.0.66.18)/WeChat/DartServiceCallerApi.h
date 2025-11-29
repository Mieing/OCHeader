@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface DartServiceCallerApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)flutterDemoGetMsgIdInfo:(id)a0 completion:(id /* block */)a1;
- (void)flutterBackupInitModelWithCompletion:(id /* block */)a0;
- (void)flutterBackupStartTaskPackageId:(long long)a0 isBackup:(BOOL)a1 completion:(id /* block */)a2;
- (void)flutterBackupStopAllTaskWithCompletion:(id /* block */)a0;
- (void)flutterBSInitNotifyDataNotifyData:(id)a0 completion:(id /* block */)a1;
- (void)flutterBSClearNotifyCacheWithCompletion:(id /* block */)a0;
- (void)flutterBSUpdateContactContactData:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
