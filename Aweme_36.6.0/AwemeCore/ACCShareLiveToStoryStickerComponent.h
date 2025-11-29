@class NSDictionary, ACCShareLiveToStoryStickerHandler, NSString;
@protocol ACCStickerServiceProtocol;

@interface ACCShareLiveToStoryStickerComponent : ACCFeatureComponent <ACCShareLiveToStoryStickerDataProvider>

@property (retain, nonatomic) ACCShareLiveToStoryStickerHandler *stickerHandler;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) NSDictionary *effectInfo;
@property (nonatomic) BOOL hasMounted;
@property (nonatomic) BOOL stickerHasAdded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSticker;
- (id)publishViewModel;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)gestureInvalidFrameValue;
- (void)bindServices:(id)a0;
- (BOOL)isClipVideoReedit;
- (void)handleShareToStoryEffectMessageNotification:(id)a0;
- (void)handleFirstRenderNotification:(id)a0;
- (void)forceUpdateSticker;
- (BOOL)needToAddSticker;
- (BOOL)hasGotEffectInfo;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
