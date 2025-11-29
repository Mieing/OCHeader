@class AWEDanmakuContainerView, NSMutableDictionary, NSString;
@protocol DDanmakuItemViewDelegate;

@interface AWEDanmakuFlowTrackLayer : DDanmakuBaseTrackLayer <AWEDanmakuFlowTrackLayerProtocol>

@property (retain, nonatomic) AWEDanmakuContainerView *danmakuContainerView;
@property (nonatomic) long long currentRenderType;
@property (retain, nonatomic) NSMutableDictionary *RTLTrackAdapterMap;
@property (nonatomic) long long danmakuScene;
@property (nonatomic) BOOL trackNumCountByPercent;
@property (nonatomic) BOOL enableAssignmentStrategyOpti;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double trackHeight;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL enableDanmakuInteractionEnabled;
@property (nonatomic) double displayArea;
@property (nonatomic) BOOL isVerticalVideo;
@property (nonatomic) double trackNumber;
@property (weak, nonatomic) id<DDanmakuItemViewDelegate> itemViewDelegate;
@property (nonatomic) double rtlHorizontalMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)updateTracksWhenLayoutChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutDidChanged;
- (void)updateRTLTracksWhenLayoutChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)calculateRTLTracksCountWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addNumberOfTracks:(unsigned long long)a0 trackType:(id)a1;
- (void)removeNumberOfTracks:(unsigned long long)a0 trackType:(id)a1;
- (void)adjustLayoutForRTLTrack:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)calculateRTLTracksCountSupportPercentWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createTrackWithType:(id)a0;
- (void)configAdapterForTrack;
- (id)RTLTrackAdapterClass;
- (BOOL)tryReceiveDanmaku:(id)a0;
- (BOOL)receiveDanmaku:(id)a0;
- (void)refreshForDanmakuTrackNumChange;
- (id)createContainerView;
- (double)calculateTrackHeightWithFontSize:(double)a0;
- (void)switchToRender:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)layerType;

@end
