@class UIView, NSString, DDanmakuTrackLayerMap;
@protocol DDanmakuRenderContext, DDanmakuContainerViewProtocol;

@interface DDanmakuBaseTrackLayer : NSObject <DDanmakuTrackLayer>

@property (retain, nonatomic) DDanmakuTrackLayerMap *typeToTracksMap;
@property (retain, nonatomic) UIView<DDanmakuContainerViewProtocol> *canvas;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (weak, nonatomic) id<DDanmakuRenderContext> renderContext;
@property (readonly, copy, nonatomic) NSString *layerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutDidChanged;
- (BOOL)receiveDanmaku:(id)a0;
- (id)createContainerView;
- (void)switchToRender:(long long)a0;
- (void)removeAllDanmakus;
- (void)updateWithPassingTime:(double)a0;
- (void)removeDanmaku:(id)a0;
- (BOOL)containsDanmaku:(id)a0;
- (void)redisplayDanmakus;
- (BOOL)danmakuDisplayingOnTrack;
- (void)notifyTrackLayersBookDanmakuIfNeed;
- (id)displayingDanmakuDescriptors;
- (id)bookDanmakuDescriptors;
- (void)removeBookDanmakus;
- (void).cxx_destruct;
- (id)init;

@end
