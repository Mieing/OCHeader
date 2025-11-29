@class IESLiveEZDanmakuMutexDispatcher, NSString, IESLiveEZDanmakuEngine, IESLiveCarnivalDanmakuSettings, NSMutableArray, IESLiveEZDanmakuContourCanvas;
@protocol IESLiveRoomService;

@interface IESLiveCarnivalDanmakuEngine : NSObject <IESLiveEZDanmakuEngineDelegate>

@property (retain, nonatomic) IESLiveCarnivalDanmakuSettings *engineSettings;
@property (nonatomic) long long displayedDanmakuCountUntilNextEgg;
@property (nonatomic) long long availablePercent;
@property (copy, nonatomic) id /* block */ finishDisplayBlock;
@property (retain, nonatomic) NSMutableArray *metaDatas;
@property (retain, nonatomic) IESLiveEZDanmakuEngine *ezDanmakuEngine;
@property (retain, nonatomic) IESLiveEZDanmakuContourCanvas *contourCanvas;
@property (retain, nonatomic) IESLiveEZDanmakuMutexDispatcher *mutexDispatcher;
@property (nonatomic) long long lastEggDanmakuAppearCount;
@property (nonatomic) long long displayingNodeCount;
@property (nonatomic) BOOL working;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) id<IESLiveRoomService> roomservice;
@property (retain, nonatomic) NSMutableArray *generalCarnivalSpecialEggs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onOrientationTransitionBegin:(long long)a0;
- (void)updateDanmakuAlpha:(double)a0;
- (void)updateDanmakuAreaType:(long long)a0;
- (void)setContourCanvasHiddenStatus:(long long)a0;
- (void)setupChannels;
- (long long)getEggAppearRandomCount;
- (void)updateCanvasAlpha:(double)a0 withAnimation:(BOOL)a1;
- (id)mutexSpiritWithNode:(id)a0;
- (id)radiationSpiritWithNode:(id)a0;
- (void)trackRedPacketCarnivalDanmakuShowWithSpirit:(id)a0;
- (id)creatEggDanmaku;
- (BOOL)showEggDanmakuAlone:(id)a0;
- (void)fireEggDanmakuWithNode:(id)a0;
- (id)centerSpiritWithNode:(id)a0;
- (id)getRandomConfig;
- (double)getSpeedMultipleWithChatScore:(long long)a0;
- (void)danmakuEngineRuningDanmakuCountChange:(long long)a0;
- (void)danmakuEngineSpiritDidFired:(id)a0;
- (void)danmakuEngine:(id)a0 didTouchSpirit:(id)a1;
- (id)initWithContentView:(id)a0 engineSettings:(id)a1 orientation:(long long)a2;
- (void)onReceivedMaskContourInfo:(id)a0;
- (void)finishDisplay:(id /* block */)a0;
- (void)orientaionDidChange:(long long)a0;
- (void)respondToKeyboardShow:(BOOL)a0;
- (void)fireDanmakuWithNode:(id)a0;
- (id)prepareToDisplayNodes;
- (void)removeAllRunningDanmuku;
- (void)removeAllDanmuku;
- (void)updateDanmakuFontSizeType:(long long)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)hide;
- (void)start;
- (void)show;

@end
