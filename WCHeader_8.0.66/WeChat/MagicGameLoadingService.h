@class NSString, NSMutableDictionary, _TtC6WeChat19MagicGameLoadingBiz;

@interface MagicGameLoadingService : MMUserService <MMServiceProtocol>

@property long long reference;
@property (retain, nonatomic) _TtC6WeChat19MagicGameLoadingBiz *biz;
@property (retain, nonatomic) NSMutableDictionary *_speedCollection;
@property (retain, nonatomic) NSMutableDictionary *loadingStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preprocess:(id)a0;

- (void)onServiceInit;
- (void)dealloc;
- (void)ensureBiz;
- (id)status:(id)a0;
- (id)status:(id)a0 autoCreate:(BOOL)a1;
- (id)statusForRequestKey:(id)a0;
- (void)removeStatus:(id)a0;
- (void)checkMainThread;
- (void)preload:(id)a0 extra_data:(id)a1;
- (void)start:(id)a0 extra_data:(id)a1;
- (void)stop:(id)a0;
- (void)cancelPreload:(id)a0;
- (void)forceStop;
- (void)notifyPreloadEndIfNeeded:(id)a0;
- (void)onSetDownloadingSpeed:(id)a0 speed:(id)a1;
- (void)onPreloadEnd:(id)a0;
- (id)getDownloadingSpeed:(id)a0;
- (void)prefetchGetCodeWithResult:(unsigned long long)a0 preDownloadRequestkey:(id)a1;
- (void).cxx_destruct;

@end
