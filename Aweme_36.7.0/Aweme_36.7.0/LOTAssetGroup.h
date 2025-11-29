@class NSString, NSBundle, NSURL, LOTAnimationView, NSMutableDictionary, NSDictionary;

@interface LOTAssetGroup : NSObject {
    NSMutableDictionary *_assetMap;
    NSDictionary *_assetJSONMap;
}

@property (retain, nonatomic) NSString *rootDirectory;
@property (readonly, nonatomic) NSBundle *assetBundle;
@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) BOOL ignoreBundleResource;
@property (weak, nonatomic) LOTAnimationView *referencedAnimationView;

- (id)assetModelForID:(id)a0;
- (void)buildAssetNamed:(id)a0 withFramerate:(id)a1;
- (id)initWithJSON:(id)a0 withAssetBundle:(id)a1 withFramerate:(id)a2;
- (void)finalizeInitializationWithFramerate:(id)a0;
- (void).cxx_destruct;

@end
