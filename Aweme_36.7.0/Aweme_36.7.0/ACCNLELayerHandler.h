@class NSPointerArray, ACCNLEImageWrapper, NSDictionary, ACCStickerContainerView;
@protocol ACCNLELayerModuleDetector;

@interface ACCNLELayerHandler : NSObject

@property (retain, nonatomic) NSPointerArray *allAddedStickers;
@property (weak, nonatomic) ACCStickerContainerView *stickerContainer;
@property (weak, nonatomic) ACCNLEImageWrapper *NLEImageWrapper;
@property (weak, nonatomic) id<ACCNLELayerModuleDetector> moduleDetector;
@property (retain, nonatomic) NSDictionary *commonTrackParams;

+ (BOOL)canProcessLayer:(id)a0;
+ (id /* block */)viewConstrutor;
+ (id /* block */)viewConfigConstrutor;

- (void)configView:(id)a0 config:(id)a1 forLayer:(id)a2;
- (id)addLayerViewWithLayer:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)restoreLayer:(id)a0;

@end
