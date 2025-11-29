@class NSString, NSMutableArray;
@protocol TXLivePushJSAdapterProtocol;

@interface TXLiveBaseAdapter : MMRootService <TXLiveAudioSessionDelegate, V2TXLivePremierObserver, MMServiceProtocol>

@property (nonatomic) unsigned long long loggingBusinessType;
@property (retain, nonatomic) NSMutableArray *delegateList;
@property (copy, nonatomic) NSString *pusherAppId;
@property (nonatomic) BOOL isWXTalking;
@property (nonatomic) BOOL isInVoIP;
@property (weak, nonatomic) id<TXLivePushJSAdapterProtocol> pusher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)initDefaultDatas;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)startLogWithType:(long long)a0;
- (void)startLogWithType:(long long)a0 delegate:(id)a1;
- (void)stopLogWithType:(long long)a0;
- (BOOL)isWeAppLivePusherWorking;
- (void)didMonoServiceRejectMsg;
- (void)onLog:(long long)a0 log:(id)a1;
- (BOOL)setActive:(BOOL)a0 error:(id *)a1;
- (BOOL)setActive:(BOOL)a0 withOptions:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setMode:(id)a0 error:(id *)a1;
- (BOOL)setCategory:(id)a0 error:(id *)a1;
- (BOOL)setCategory:(id)a0 withOptions:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setCategory:(id)a0 mode:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)inner_setCategory:(id)a0 mode:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)overrideOutputAudioPort:(unsigned long long)a0 error:(id *)a1;
- (BOOL)isAudioModuleActiving;
- (BOOL)onBaseAdapterAudioSessionCategoryCheckCanSet:(id)a0;
- (void)onBaseAdapterAudioSessionCategoryWillSet:(id)a0;
- (void)onBaseAdapterAudioSessionCategoryDidSet:(id)a0;
- (BOOL)checkLogBusinessActive:(long long)a0;
- (void)registerDelegete:(id)a0 type:(long long)a1;
- (void)unRegisterDelegetesWithType:(long long)a0;
- (id)getDelegetesWithType:(long long)a0;
- (id)getLoggingDelegates;
- (void).cxx_destruct;

@end
