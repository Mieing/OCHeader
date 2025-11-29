@class NSMutableDictionary, NSString, UIView, DDanmakuItemReusePool;
@protocol DDanmakuRenderEngineDelegate;

@interface DDanmakuRenderEngine : NSObject <DDanmakuRenderContext, DDanmakuContainerViewDelegate>

@property (retain, nonatomic) NSMutableDictionary *typeToLayerMap;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIView *danmakuContainerView;
@property (retain, nonatomic) DDanmakuItemReusePool *itemViewReusePool;
@property (weak, nonatomic) id<DDanmakuRenderEngineDelegate> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDisplayDanmaku:(id)a0 inContainerView:(id)a1;
- (void)addTrackLayer:(id)a0;
- (void)didEndDisplayDanmaku:(id)a0 inContainerView:(id)a1;
- (void)didTappedDanmaku:(id)a0 inContainerView:(id)a1;
- (BOOL)receiveDanmaku:(id)a0;
- (void)switchToRender:(long long)a0;
- (void)pauseDisplayingDanmakuByID:(id)a0;
- (void)removeDisplayingDanmakuByID:(id)a0;
- (void)resumeDisplayingDanmakuByID:(id)a0;
- (id)dequeueItemViewWithType:(id)a0;
- (void)enqueueItemView:(id)a0 forType:(id)a1;
- (id)dequeueItemInfoWithType:(id)a0;
- (void)removeAllDanmakus;
- (void)registerClass:(Class)a0 forItemViewType:(id)a1;
- (void)removeDanmaku:(id)a0;
- (void)redisplayDanmakus;
- (void)notifyTrackLayersBookDanmakuIfNeed;
- (id)displayingDanmakuDescriptors;
- (id)bookDanmakuDescriptors;
- (void)timeUpdated:(double)a0;
- (void)enqueueItemInfo:(id)a0 forType:(id)a1;
- (void)notifyTrackLayersTimeUpdated:(double)a0;
- (void)removeAllBookedDanmakus;
- (BOOL)danmakuDisplayingOnTrackWithType:(id)a0;
- (void)registerClass:(Class)a0 forItemType:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)layoutDidChange;

@end
