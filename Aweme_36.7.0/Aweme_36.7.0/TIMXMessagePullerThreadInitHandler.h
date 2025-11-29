@class NSString, TIMXSDKInstance;
@protocol TIMXCurrentUserCredentialProtocol, TIMXKVStorageProtocol, TIMXMessagePullerInitHandlerDelegateProtocol;

@interface TIMXMessagePullerThreadInitHandler : NSObject <TIMXMessagePullerInitHandlerProtocol> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (weak, nonatomic) id<TIMXMessagePullerInitHandlerDelegateProtocol> delegate;
@property (retain, nonatomic) id<TIMXKVStorageProtocol> kvStorage;
@property (retain, nonatomic) id<TIMXCurrentUserCredentialProtocol> userCredential;
@property (copy, nonatomic) NSString *kvInitStatusKey;
@property (copy, nonatomic) NSString *kvInitVersionKey;
@property unsigned long long initStatus;
@property (nonatomic) BOOL isFetchingThread;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInitHandlerWithContext:(id)a0;

- (void)resetInitPuller;
- (void)migrateOldPuller;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 userID:(long long)a2 delegate:(id)a3;
- (void)kickoffInitHandlerWithVersionValidDict:(id)a0;
- (void)setupKeys;
- (unsigned long long)readInitStatus;
- (void)startInitThread;
- (void)setInitStatusAndSave:(unsigned long long)a0;
- (long long)readInitVersion;
- (void)processThreadInitWithVersion:(long long)a0;
- (void)handleThreadInitFetchSuccess:(id)a0 context:(id)a1;
- (void)handleThreadInitFetchFailed:(id)a0;
- (void)saveInitVersion:(long long)a0;
- (void)handleThreadInitMessages:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
