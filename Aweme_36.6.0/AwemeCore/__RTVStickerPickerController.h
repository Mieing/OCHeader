@class NSString;
@protocol RxInjector, RTVSettingsManager;

@interface __RTVStickerPickerController : AWEStickerPickerController <RTVStickerPickerController>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (nonatomic) BOOL needCustomFavoriteViewLayout;
@property (nonatomic) BOOL disableInteractionSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rxInjectorCreateWithArgs:(id)a0 injector:(id)a1;

- (void)rxAwakeFromPropertyInjection;
- (void)addFavoriteView:(id)a0;
- (void)layoutFavoriteView:(id)a0;
- (void)showFavoriteView:(BOOL)a0;
- (void)updateNeedCustomFavoriteViewLayout:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;

@end
