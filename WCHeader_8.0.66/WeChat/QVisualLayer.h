@class NSString, QMapRepeatTimer, QVisLayerPayload, QLayerCommonData, QBaseVisualLayerManager;
@protocol QVisualLayerDelegate;

@interface QVisualLayer : NSObject <QGLOverlayDelegate, QModelOverlayDelegate>

@property (copy, nonatomic) NSString *layerID;
@property (retain, nonatomic) QMapRepeatTimer *repeater;
@property (weak, nonatomic) QBaseVisualLayerManager *manager;
@property (copy, nonatomic) NSString *modelCachePath;
@property (retain, nonatomic) QLayerCommonData *commonData;
@property (nonatomic) BOOL isAdded;
@property (nonatomic) BOOL toUpdateModelData;
@property (nonatomic) int modelPedestalRectCount;
@property (retain, nonatomic) QVisLayerPayload *payload;
@property (copy, nonatomic) NSString *modelFolder;
@property (nonatomic) BOOL visible;
@property (nonatomic) double opacity;
@property (nonatomic) int zIndex;
@property (weak, nonatomic) id<QVisualLayerDelegate> delegate;
@property (nonatomic) double interval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)executeCommand:(id)a0 commandJson:(id)a1;
- (void)sendEvent:(id)a0;
- (void)glOverlay:(id)a0 translateAnimationDidComplete:(BOOL)a1;
- (void)glOverlay:(id)a0 didTap:(id)a1;
- (void)notifyGPLayerLoadEventError:(long long)a0 msg:(id)a1;
- (void)glOverlay:(id)a0 loadStatus:(long long)a1 withProgress:(double)a2;
- (void)onLayerLoadEventError:(id)a0;
- (void)startTimer:(double)a0;
- (void)invalidateTimer;
- (void)onLoadCompleteWithError:(id)a0;
- (void)onLog:(id)a0 andLevel:(int)a1;
- (void)clearCache;
- (id)duplicateLayerID;
- (id)getOriginalLayerId;
- (id)initWithUID:(id)a0;
- (id)clone;
- (void)dealloc;
- (void).cxx_destruct;

@end
