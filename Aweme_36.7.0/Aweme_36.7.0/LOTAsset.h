@class NSString, NSBundle, NSURL, LOTLayerGroup, NSNumber, LOTAnimationView;

@interface LOTAsset : NSObject

@property (readonly, nonatomic) NSString *referenceID;
@property (readonly, nonatomic) NSNumber *assetWidth;
@property (readonly, nonatomic) NSNumber *assetHeight;
@property (readonly, nonatomic) NSString *imageName;
@property (readonly, nonatomic) NSString *imageDirectory;
@property (readonly, nonatomic) LOTLayerGroup *layerGroup;
@property (retain, nonatomic) NSString *rootDirectory;
@property (readonly, nonatomic) NSBundle *assetBundle;
@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) BOOL ignoreBundleResource;
@property (weak, nonatomic) LOTAnimationView *referencedAnimationView;

- (void)_mapFromJSON:(id)a0 withAssetGroup:(id)a1 withFramerate:(id)a2;
- (id)initWithJSON:(id)a0 withAssetGroup:(id)a1 withAssetBundle:(id)a2 withFramerate:(id)a3;
- (void).cxx_destruct;

@end
