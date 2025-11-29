@class NSString, TIMXSDKInstance;
@protocol TIMXKVStorageProtocol, TIMXMessagePullerInitHandlerDelegateProtocol;

@interface TIMXMessagePullerInitHandler : NSObject <TIMXMessagePullerInitHandlerProtocol> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (weak, nonatomic) id<TIMXMessagePullerInitHandlerDelegateProtocol> delegate;
@property (retain, nonatomic) id<TIMXKVStorageProtocol> kvStorage;
@property (copy, nonatomic) NSString *kvLocationCursorKey;
@property (copy, nonatomic) NSString *kvCursorInitedKey;
@property (copy, nonatomic) NSString *kvInitStatusKey;
@property (nonatomic) BOOL cursorInited;
@property (nonatomic) BOOL hasInitOver;
@property (nonatomic) BOOL isConversationVersionValid;
@property (nonatomic) BOOL isCmdMessageIndexValid;
@property (nonatomic) BOOL isVersionInitValid;
@property unsigned long long initStatus;
@property unsigned long long coldStartPullerInitStatus;
@property (retain, nonatomic) NSString *logMarkerForInit;
@property BOOL isRequesting;
@property (nonatomic) double pullStartTime;
@property (nonatomic) long long retryCount;
@property (nonatomic) double netInitPullALLTime;
@property (nonatomic) double dbInitPullALLTime;
@property (nonatomic) long long netInitPullALLCount;
@property (nonatomic) long long hasFetchedMsgCounts;
@property (nonatomic) long long hasFetchedConvCounts;
@property BOOL isBackground;
@property BOOL backgroundChanged;
@property long long currentNetworkStatus;
@property BOOL reachabilityChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInitHandlerWithContext:(id)a0;

- (void)startInit;
- (BOOL)hasInitSuccess;
- (void)finishInitWithError:(id)a0;
- (void)continueFetchPullIfNeedWithCompletion:(id /* block */)a0;
- (void)resetInitPuller;
- (void)migrateOldPuller;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 userID:(long long)a2 delegate:(id)a3;
- (void)kickoffInitHandlerWithVersionValidDict:(id)a0;
- (void)handleVersionValidChanged:(BOOL)a0 chainType:(long long)a1;
- (BOOL)needReportVersionInvalid;
- (void)setupKeys;
- (void)logDBInfo;
- (id)kvInitHasMoreKey;
- (void)fetchInitListWithNextVersion:(long long)a0 source:(id)a1 withCompletion:(id /* block */)a2;
- (id)kvFetchInitPageKey;
- (void)fetchInitListSuccess:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)fetchInitListFailure:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)endInitWithLogID:(id)a0;
- (void)trackInitResultWithContext:(id)a0 responseObject:(id)a1;
- (void)traceInitInfoWithLogID:(id)a0;
- (void).cxx_destruct;
- (void)reachabilityChanged:(id)a0;
- (void)appDidEnterBackground:(id)a0;
- (void)appWillEnterForeground:(id)a0;

@end
