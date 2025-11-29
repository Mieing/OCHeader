@class OrderedDictionary, NSString, NSRecursiveLock;

@interface FileDetailMinimizeKeeperMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) OrderedDictionary *fileVcDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMinimizeViewControllerWithKey:(id)a0;
- (void)addMinimizeViewController:(id)a0 forKey:(id)a1;
- (void)removeMinimizeViewControllerWithKey:(id)a0;
- (BOOL)hasAudioPlayingTask;
- (BOOL)disablePDFView;
- (void)onServiceInit;
- (void)onMemoryWarning:(id)a0;
- (void).cxx_destruct;

@end
