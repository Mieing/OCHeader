@class IESEZDanmakuContext, NSMutableDictionary, IESEZDanmakuDispatcher, NSString, IESEZDanmakuCanvasView, IESEZDanmakuNotificationCenter, NSMutableArray;
@protocol IESEZDanmakuDataProtocol, IESEZDanmakuSettingsProtocol;

@interface IESEZDanmakuTrackComponent : NSObject <IESEZDanmakuNotificationSubscriber, IESEZDanmakuClockRefreshProtocol, IESEZDanmakuControlProtocol, IESEZDanmakuComponentProtocol>

@property (retain, nonatomic) IESEZDanmakuContext *context;
@property (retain, nonatomic) id<IESEZDanmakuSettingsProtocol> settings;
@property (retain, nonatomic) IESEZDanmakuDispatcher *dispatcher;
@property (retain, nonatomic) IESEZDanmakuCanvasView *canvas;
@property (retain, nonatomic) IESEZDanmakuNotificationCenter *notificationCenter;
@property (retain, nonatomic) NSMutableArray *tracks;
@property (retain, nonatomic) NSMutableArray *percentTracks;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } canvasSafeArea;
@property (retain, nonatomic) id<IESEZDanmakuDataProtocol> waitingTrackData;
@property (retain, nonatomic) NSMutableDictionary *trackStrategyDic;
@property (nonatomic) struct CGSize { double width; double height; } lastCanvasSize;
@property (nonatomic) long long trackCountLimit;
@property (nonatomic) BOOL reloadTrackInsteadReset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long controlState;

+ (id)componentType;

- (void)setSafeArea:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)ezDanmakuNotificationCenter:(id)a0 notiEvent:(id)a1 userInfo:(id)a2;
- (void)stopAllRunningDanmaku;
- (void)updateWithTime:(double)a0;
- (void)subscribeDanmakuNotification;
- (void)injectDispatcher;
- (void)p_makeTrackStrategiesDisable:(BOOL)a0 withIdentifiers:(id)a1;
- (void)executeCommonStrategy;
- (double)trackHeightForFontSizeType:(long long)a0;
- (long long)currentAvailableTrackPercentFromSetting;
- (void)dispatchOnTrackWithDanmaku:(id)a0 forDispatcher:(id)a1;
- (void)makeTrackAvailable:(id)a0;
- (void)createTracks;
- (void)handleAreaTypeChange;
- (void)handleFontSizeTypeChange;
- (void)tryToDispatchWaitingData;
- (void)reloadTracks;
- (void)registerTrackStrategy:(id)a0 withStrategyIdentifier:(id)a1;
- (void)makeTrackStrategiesEnableWithIdentifiers:(id)a0;
- (void)makeTrackStrategiesDisableWithIdentifiers:(id)a0;
- (long long)trackCountInAvailable;
- (long long)trackCount;
- (void).cxx_destruct;
- (void)pause;
- (id)initWithContext:(id)a0;
- (void)stop;
- (void)start;
- (void)resume;

@end
