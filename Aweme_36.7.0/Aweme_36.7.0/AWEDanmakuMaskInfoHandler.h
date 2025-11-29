@class UIImageView, AWEAwemeModel, UIView, AWEDanmakuMaskLayer;
@protocol AWEDanmakuMaskInfoHandlerDelegate;

@interface AWEDanmakuMaskInfoHandler : NSObject

@property (nonatomic) BOOL danmakuInEmptyScreen;
@property (retain, nonatomic) AWEDanmakuMaskLayer *maskLayer;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) UIView *danmakuContainerView;
@property (nonatomic) long long maskStepDropCount;
@property (nonatomic) long long maskStepDrawCount;
@property (retain, nonatomic) UIImageView *graphicsDanmakuView;
@property (nonatomic) unsigned long long previousPTS;
@property (nonatomic) unsigned long long currentPTS;
@property (nonatomic) BOOL hasReceiveMask;
@property (weak, nonatomic) id<AWEDanmakuMaskInfoHandlerDelegate> delegate;
@property (nonatomic) BOOL finishLayerConfig;

+ (BOOL)enableDanmakuMaskPerformanceOpt;
+ (id)danmakuSVGHandleQueue;

- (void)setEvent;
- (void)didEnterEmptyScreenWithDuration:(double)a0;
- (void)didDisplayDanmaku;
- (void)didTappedDanmakuView:(id)a0;
- (void)refreshDanmakuMaskStatusForSwitchChange;
- (void)handleMaskInfoUpdate:(id)a0 pts:(unsigned long long)a1;
- (void)handleVideoFrameChange;
- (void)resumeDanmakuViewIfNeed:(id)a0;
- (void)handleSVGToImage:(id)a0 pts:(unsigned long long)a1;
- (void)transformSVGToImage:(id)a0;
- (void)configDanmakuMaskLayerIfNeed;
- (void)setDanmakuMaskSVGImage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)updateWithModel:(id)a0;

@end
