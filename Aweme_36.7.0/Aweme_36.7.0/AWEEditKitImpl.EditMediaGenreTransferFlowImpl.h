@class UIImage;

@interface AWEEditKitImpl.EditMediaGenreTransferFlowImpl : NSObject <AEKEditMediaGenreTransferFlow> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_nodesQueue;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ tailAction;
}

@property (nonatomic) BOOL supportSingle2Multiple;
@property (nonatomic) BOOL tryPreserveDuration;
@property (nonatomic) BOOL tryAlignTTSDuration;
@property (nonatomic) BOOL fixedFrameDimension;
@property (nonatomic, retain) UIImage *coverImage;

- (void)syncEffectsFrom:(id)a0 mode:(unsigned long long)a1;
- (id)pendingExecuteQueue;
- (id)createNodeWithName:(id)a0 start:(BOOL)a1 taskExecutor:(id /* block */)a2;
- (BOOL)replaceNode:(id)a0 withNode:(id)a1;
- (BOOL)addNodeWithName:(id)a0;
- (BOOL)addNodeWithName:(id)a0 start:(BOOL)a1 taskExecutor:(id /* block */)a2;
- (BOOL)addNodeWithName:(id)a0 start:(BOOL)a1 taskExecutor:(id /* block */)a2 follow:(id)a3;
- (BOOL)removeNodeWithName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)addNode:(id)a0;
- (void)start;
- (id)nodeForName:(id)a0;
- (BOOL)removeNode:(id)a0;
- (BOOL)addNode:(id)a0 atIndex:(unsigned long long)a1;

@end
