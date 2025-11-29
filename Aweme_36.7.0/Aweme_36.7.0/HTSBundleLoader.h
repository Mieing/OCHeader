@class NSMutableDictionary;
@protocol HTSBundleLoaderDelegate;

@interface HTSBundleLoader : NSObject

@property (retain, nonatomic) NSMutableDictionary *bundleTracker;
@property (weak, nonatomic) id<HTSBundleLoaderDelegate> delegate;

+ (BOOL)loadName:(id)a0;
+ (void)unloadName:(id)a0;
+ (id)sharedLoader;

- (BOOL)loadName:(id)a0;
- (void)unloadName:(id)a0;
- (void *)pointerForBundleName:(id)a0 symbolName:(id)a1;
- (id)initPrivate;
- (void).cxx_destruct;

@end
