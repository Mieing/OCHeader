@class TPLock, NSMutableDictionary, TPDownloadProxy, NSString;
@protocol TPPreloadProxyDelegate;

@interface TPProxyPreloadManager : NSObject <ITPPreloadProxyLifeCycleDelegate, ITPPreloadProxy>

@property (retain, nonatomic) TPDownloadProxy *downloadProxy;
@property (retain, nonatomic) NSMutableDictionary *delegates;
@property (retain, nonatomic) TPLock *delegateLock;
@property (nonatomic) int serviceType;
@property (nonatomic) BOOL initialized;
@property (nonatomic) long long initializeTryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TPPreloadProxyDelegate> delegate;

- (id)initWithServiceType:(long long)a0;
- (void)dealloc;
- (int)startPreloadWithFileId:(id)a0 downloadParam:(id)a1;
- (int)startPreloadWithFileId:(id)a0 downloadParam:(id)a1 httpHeader:(id)a2;
- (int)startClipPreloadWithFileId:(id)a0 downloadParamList:(id)a1;
- (void)stopPreloadWithPreloadId:(int)a0;
- (void)pushEvent:(long long)a0;
- (BOOL)isAvailable;
- (id)errorCodeStringWithPreloadId:(int)a0;
- (BOOL)isValidPlayId:(int)a0;
- (BOOL)initialzeProxyIfNeeded;
- (BOOL)initializeProxyImpl;
- (void)onLifeCycleEndWithPlayId:(int)a0;
- (void).cxx_destruct;

@end
