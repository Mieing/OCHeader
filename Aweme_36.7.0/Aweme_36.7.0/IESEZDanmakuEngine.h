@class IESEZDanmakuContext, NSMutableDictionary, NSString, NSMutableArray;
@protocol IESEZDanmakuEngineDelegate, IESEZDanmakuDispatcherProtocol;

@interface IESEZDanmakuEngine : NSObject <IESEZDanmakuClockDelegate, IESEZDanmakuDispatcherDelegate, IESEZDanmakuSettingsDelegate, IESEZDanmakuControlProtocol>

@property (retain, nonatomic) IESEZDanmakuContext *context;
@property (retain, nonatomic) NSMutableDictionary *componentsConfig;
@property (retain, nonatomic) NSMutableArray *loadedComponents;
@property (nonatomic) BOOL componentsLoaded;
@property (retain, nonatomic) id<IESEZDanmakuDispatcherProtocol> dispatcher;
@property (weak, nonatomic) id<IESEZDanmakuEngineDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long controlState;

+ (id)engineWithBizID:(id)a0;
+ (id)defaultComponentsConfig;
+ (id)requiredComponentsList;

- (void)prepareStart;
- (void)changeDanmakuComponentsWithConfig:(id)a0;
- (void)setCanvasOnView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)fireDanmaku:(id)a0;
- (void)danmakuClock:(id)a0 updateWithTime:(double)a1;
- (void)dispatcher:(id)a0 didEndDisplayDanmaku:(id)a1;
- (void)dispatcher:(id)a0 willDispatchDanmaku:(id)a1;
- (void)dispatcher:(id)a0 didDispatchDanmaku:(id)a1;
- (void)danmakuSettings:(id)a0 settingKey:(id)a1 didChangeTo:(id)a2;
- (id)businessComponentWithType:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)notificationCenter;
- (id)init;
- (void)stop;
- (void)start;
- (void)resume;

@end
