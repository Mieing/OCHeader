@interface FinderPrefetchManager : NSObject {
    struct weak_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *__ptr_; struct __shared_weak_count *__cntrl_; } client_invoker_;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1;

- (void)attachClientInvoker:(const void *)a0;
- (struct shared_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *x0; struct __shared_weak_count *x1; })getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)initWithDbDirPath:(id)a0;
- (void)updateLocalBackupFeed:(id)a0 commentScene:(int)a1 feedSource:(unsigned long long)a2;
- (void)removeLocalBackupFeeds:(id)a0;
- (void)removeAllLocalBackupFeeds;
- (id)localFeedArray:(int)a0 commentScene:(int)a1 limitCount:(int)a2;
- (id)localFeedArrayWithFeedSource:(unsigned long long)a0 commentScene:(int)a1 limitCount:(int)a2;
- (BOOL)hasEnoughValidLocalFeeds:(int)a0 commentScene:(int)a1 count:(int)a2;
- (BOOL)canShowEduTipsWithKey:(int)a0;
- (void)markShowOnceEduTipsWithKey:(int)a0;
- (void)markEduTipsNeverShowWithKey:(int)a0;
- (void)resetEduTipsRecordWithKey:(int)a0;
- (void)updateEduTipsSvrFlag:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
