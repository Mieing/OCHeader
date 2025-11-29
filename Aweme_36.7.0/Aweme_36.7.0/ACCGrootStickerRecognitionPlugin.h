@class ACCGrootStickerComponent, NSString, ACCRecognitionGrootStickerView, ACCGrootStickerView;
@protocol ACCFeatureComponent;

@interface ACCGrootStickerRecognitionPlugin : NSObject <ACCGrootStickerInputDelegate, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCGrootStickerComponent *hostComponent;
@property (retain, nonatomic) ACCRecognitionGrootStickerView *stickerContentView;
@property (retain, nonatomic) ACCGrootStickerView *stickerView;
@property (retain, nonatomic) ACCGrootStickerView *originStickerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

+ (BOOL)serviceEnabled;

- (void)bindServices:(id)a0;
- (void)didMountGrootComponent:(id)a0 viewModel:(id)a1;
- (void)didUpdateStickerView:(id)a0;
- (void)restoreStickerViewIfNeed:(id)a0 stickerModel:(id)a1;
- (id)createRecognitionGrootStickerView:(id)a0 handler:(id)a1;
- (void)addGrootStickerWithHandler:(id)a0 stickerModel:(id)a1 viewModel:(id)a2;
- (void)showStickerContentView:(BOOL)a0;
- (void)addContentViewToStickerView:(id)a0;
- (void)setGrootTrackInfo:(id)a0;
- (void)layoutStickerView:(id)a0;
- (void).cxx_destruct;
- (void)confirm:(id)a0;

@end
