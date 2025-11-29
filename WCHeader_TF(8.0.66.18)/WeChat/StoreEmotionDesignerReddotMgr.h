@class NSRecursiveLock, NSMutableDictionary, NSString, EmptyDesignerPagePidRecord;

@interface StoreEmotionDesignerReddotMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *modelMap;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) EmptyDesignerPagePidRecord *emptyPageRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)loadDesignerReddotCache;
- (void)loadDesignerEmptyPageCache;
- (void)updatePids:(id)a0 withDesignerUin:(id)a1 needDiffPid:(BOOL)a2;
- (void)updateDesigner:(id)a0;
- (void)clearReddotWithDesignerUin:(id)a0;
- (void)clearReddotWithDesignerUin:(id)a0 andPid:(id)a1;
- (void)clearExpiredReddot;
- (void)flushDesignerInfoAndPidsToFile:(id)a0;
- (BOOL)validUin:(id)a0;
- (void)recordEmptyDesignerPagePid:(id)a0;
- (void)removeEmptyDesignerPageCache;
- (id)getPidsWithReddot:(id)a0;
- (void)getPersonDesignerAndReddotStatus:(id)a0 resultBlock:(id /* block */)a1;
- (BOOL)isReddotTimeExpired:(unsigned int)a0 currentTime:(unsigned int)a1;
- (BOOL)isDesignerPageEmpty:(id)a0;
- (void)checkDirtyData:(id)a0;
- (void).cxx_destruct;

@end
