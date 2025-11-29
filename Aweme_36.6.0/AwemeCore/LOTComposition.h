@class LOTAnimationView, NSString, NSBundle, NSURL, LOTLayerGroup, NSNumber, LOTAssetGroup;

@interface LOTComposition : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } compBounds;
@property (readonly, nonatomic) NSNumber *startFrame;
@property (readonly, nonatomic) NSNumber *endFrame;
@property (readonly, nonatomic) NSNumber *framerate;
@property (readonly, nonatomic) double timeDuration;
@property (readonly, nonatomic) LOTLayerGroup *layerGroup;
@property (readonly, nonatomic) LOTAssetGroup *assetGroup;
@property (retain, nonatomic) NSString *rootDirectory;
@property (readonly, nonatomic) NSBundle *assetBundle;
@property (copy, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) BOOL ignoreBundleResource;
@property (weak, nonatomic) LOTAnimationView *referencedAnimationView;

+ (id)animationWithFilePath:(id)a0;
+ (id)animationFromJSON:(id)a0 inBundle:(id)a1;
+ (id)animationFromJSON:(id)a0;
+ (id)animationNamed:(id)a0 inBundle:(id)a1;
+ (id)animationNamed:(id)a0;

- (id)initWithJSON:(id)a0 withAssetBundle:(id)a1;
- (void)_mapFromJSON:(id)a0 withAssetBundle:(id)a1;
- (void).cxx_destruct;

@end
