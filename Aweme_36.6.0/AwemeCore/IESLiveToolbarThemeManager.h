@class NSDictionary, NSMutableDictionary;
@protocol IESLiveToolbarComponentHandler;

@interface IESLiveToolbarThemeManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *vertical;
@property (retain, nonatomic) NSMutableDictionary *landscape;
@property (retain, nonatomic) NSDictionary *skinPool;
@property (weak, nonatomic) id<IESLiveToolbarComponentHandler> target;

- (id)imageThemeResource:(id)a0;
- (void)pickupResourceForOrientation:(long long)a0;
- (id)initWithSkinResource:(id)a0;
- (void)prefetchImageDataWithComponentSkin:(id)a0;
- (BOOL)checkLocalDataExistStatusWithSkinPool:(id)a0;
- (void)cacheDataWithSkinPool:(id)a0 complete:(id /* block */)a1;
- (id)imageThemeResource:(id)a0 defaultGeckoKey:(id)a1;
- (void)loadImage:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
