@class DDanmakuItemDescriptor, NSMutableArray, UIView;
@protocol DDanmakuRenderContext, DDanmakuContainerViewProtocol;

@interface DDanmakuBaseTrack : NSObject <DDanmakuTrack>

@property (retain, nonatomic) NSMutableArray *displayingDanmakusArray;
@property (nonatomic) BOOL isHidden;
@property (weak, nonatomic) id<DDanmakuRenderContext> renderContext;
@property (weak, nonatomic) UIView<DDanmakuContainerViewProtocol> *canvas;
@property (retain, nonatomic) DDanmakuItemDescriptor *bookedDanmaku;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (void)layoutDidChanged;
- (void)didDestory;
- (void)danmakuContentSizeDidChanged:(id)a0;
- (void)unloadDanmaku:(id)a0;
- (BOOL)canBookDanmaku:(id)a0;
- (void)addDanmaku:(id)a0;
- (void)bookingDanmaku:(id)a0;
- (BOOL)canAddDanmaku:(id)a0;
- (double)calculateLifeTimeForDanmakuDescriptor:(id)a0;
- (void)updateDanmakuDescriptor:(id)a0;
- (void)removeAllDanmakus;
- (void)updateWithPassingTime:(double)a0;
- (void)bookDanmakuIfNeed;
- (void)removeDanmaku:(id)a0;
- (BOOL)containsDanmaku:(id)a0;
- (void)removeBookDanmaku;
- (void)redisplayDanmakus;
- (void)hideDanmakus:(BOOL)a0;
- (BOOL)danmakuDisplayingOnTrack;
- (void).cxx_destruct;
- (id)trackType;
- (id)init;
- (void)didAppear;
- (void)didDisappear;

@end
