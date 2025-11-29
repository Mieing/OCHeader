@class NSMutableIndexSet, NSString, CachalotMainLoopIdleTaskManager;
@protocol CachalotListViewPreRenderHelperDelegate;

@interface CachalotListViewPreRenderHelper : NSObject

@property (retain, nonatomic) CachalotMainLoopIdleTaskManager *taskManager;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } renderRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } leadingPreRenderRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } trailingPreRenderRange;
@property (retain, nonatomic) NSMutableIndexSet *manualPreRenderSet;
@property (weak, nonatomic) id<CachalotListViewPreRenderHelperDelegate> delegate;
@property (nonatomic) long long preRenderCountBefore;
@property (nonatomic) long long preRenderCountAfter;
@property (nonatomic) BOOL shutDown;
@property (copy, nonatomic) NSString *sceneName;
@property (readonly, nonatomic) BOOL enabled;
@property (nonatomic) BOOL blockAutoStrategy;

- (id)initWithDelegate:(id)a0 taskManager:(id)a1;
- (void)p_triggerCacheAutoCleaning;
- (void)p_cancelPreRenderAtIndex:(long long)a0;
- (void)p_doPreRenderAtIndex:(long long)a0;
- (BOOL)p_enabled;
- (void)p_updateRenderRangeForBeginDisplay:(long long)a0 totalCount:(long long)a1;
- (void)p_updateRenderRangeForEndDisplay:(long long)a0 totalCount:(long long)a1;
- (id)p_visibleIndexes;
- (void)p_updatePreRenderRange:(long long)a0;
- (void)refreshPreRenderStatus:(long long)a0;
- (void)p_triggerPreRender:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 currentLeading:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 lastLeading:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 currentTrailing:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 lastTrailing:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (id)p_indexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 butNotInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)p_handlePreRenderForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)p_cancelPreRenderAtIndexes:(id)a0;
- (void)p_cancelPreRenderForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)p_handlePreRenderAtIndex:(long long)a0;
- (void)manualPreRenderAtIndexes:(id)a0;
- (void)beginDisplayAtIndex:(long long)a0 totalCount:(long long)a1;
- (void)endDisplayAtIndex:(long long)a0 totalCount:(long long)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
