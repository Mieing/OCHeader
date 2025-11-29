@class MMAssetPickerControllerState, NSMutableDictionary;

@interface MMAssetPickerInterceptor : NSObject

@property (retain, nonatomic) NSMutableDictionary *assetInjectorMap;
@property (retain, nonatomic) MMAssetPickerControllerState *updateState;
@property (nonatomic) BOOL shouldInterrupt;
@property (nonatomic) BOOL shouldKeepLoading;
@property (nonatomic) BOOL shouldReactivePreviewController;

+ (id)_safeKeyForAsset:(id)a0;

- (id)createAndBindAssetInjectorForAsset:(id)a0;
- (void)bindInjector:(id)a0 withAsset:(id)a1;
- (id)unbindInjectorByAsset:(id)a0;
- (id)findInjectorByAsset:(id)a0;
- (id)_findInjectorByAsset:(id)a0 andRemove:(BOOL)a1;
- (void).cxx_destruct;

@end
