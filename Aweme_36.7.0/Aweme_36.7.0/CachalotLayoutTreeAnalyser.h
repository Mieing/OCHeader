@class CachalotContext, NSArray, CachalotLayoutModel, CachalotRenderPipeline, NSMutableDictionary, CachalotErrorMonitor, CachalotContainerLayoutDurationMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface CachalotLayoutTreeAnalyser : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _syncLock;
    struct _opaque_pthread_mutexattr_t { long long __sig; char __opaque[8]; } _syncLockAttr;
}

@property (weak, nonatomic) CachalotContext *engineContext;
@property (weak, nonatomic) CachalotRenderPipeline *pipeline;
@property (retain, nonatomic) CachalotContainerLayoutDurationMonitor *layoutMonitor;
@property (retain, nonatomic) CachalotErrorMonitor *errorMonitor;
@property (retain, nonatomic) CachalotLayoutModel *topLayoutModel;
@property (copy, nonatomic) NSArray *layoutResult;
@property (copy, nonatomic) NSArray *lastLayoutResult;
@property (copy, nonatomic) NSArray *layoutResultCache;
@property (nonatomic) BOOL needToSync;
@property (retain, nonatomic) NSMutableDictionary *layoutNodeMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentMeasureQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialMeasureQueue;
@property (copy, nonatomic) id /* block */ fetchContainerFrame;
@property (nonatomic) struct CGSize { double width; double height; } screenSize;
@property (nonatomic) double containerWidth;
@property (nonatomic) BOOL concurrentSizeMeasure;
@property (nonatomic) double concurrentSizeMeasureTimeout;
@property (nonatomic) BOOL syncAtMainThread;
@property (nonatomic) BOOL fixParentMissing;
@property (nonatomic) BOOL fixFilterUnrenderableIndexPaths;

- (id)processAndGenerateFinalLayoutModels:(id /* block */)a0;
- (id)updateTopLayoutModel:(id)a0 finalLayoutsReadyBlock:(id /* block */)a1;
- (void)p_mergeLayoutModel:(id)a0 withModel:(id)a1;
- (id)mergeTopLayoutModelWithModel:(id)a0 finalLayoutsReadyBlock:(id /* block */)a1;
- (id)p_measureLayoutModel:(id)a0 errorCode:(unsigned long long *)a1;
- (id)p_diffLayoutResults:(id)a0 withResults:(id)a1;
- (void)p_syncLock;
- (void)p_syncUnlock;
- (id)p_childLayoutModelsOfParent:(id)a0;
- (void)p_removeLayout:(id)a0;
- (id)processAndGenerateFinalLayoutModels;
- (void)p_findLeafCardForLayoutNode:(id)a0 leafs:(id *)a1;
- (unsigned long long)measureLayoutModel:(id)a0 finalLayoutsReadyBlock:(id /* block */)a1;
- (id)updateTopLayoutModel:(id)a0;
- (void)p_syncLayoutsToCache;
- (void)preOrderTraverseNode:(id)a0 withBlock:(id /* block */)a1 onlyLeafNode:(BOOL)a2;
- (void)p_preprocessLayoutModelNonRecursion:(id)a0 containerWidth:(double)a1 errorCode:(unsigned long long *)a2;
- (id)p_generateLayoutModelAbsoluteFrame:(id)a0 containerWidth:(double)a1;
- (id)allRenderableLayoutsOfParent:(id)a0;
- (id)p_stuffContextForRenderableLayoutModel:(id)a0;
- (void)p_calculateParentLayoutSizeForTopLayout:(id)a0;
- (void)preOrderTraverseNode:(id /* block */)a0 onlyLeafNode:(BOOL)a1;
- (void)setFetchContainerFrameBlock:(id /* block */)a0;
- (id)mergeTopLayoutModelWithModel:(id)a0;
- (void)mergeLayoutModel:(id)a0 withModel:(id)a1;
- (id)squashedLayoutModelsOfParentLayoutModel:(id)a0;
- (void)removeAllForwardingNodeForRoot:(id)a0;
- (id)deleteLayoutModels:(id)a0;
- (id)refreshLayoutNode:(id)a0;
- (id)refreshLayoutNodes:(id)a0;
- (void)forceFlush;
- (void)stuffContextForLayout:(id)a0;
- (id)retrieveAllDirtyLayouts:(unsigned long long)a0;
- (void)sync;
- (id)flush;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
