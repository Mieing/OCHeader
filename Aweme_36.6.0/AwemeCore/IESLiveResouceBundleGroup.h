@class NSArray;

@interface IESLiveResouceBundleGroup : IESLiveResouceBundle

@property (copy, nonatomic) NSArray *bundles;

- (id)objectForKey:(id)a0 type:(id)a1;
- (id)initWithBundleNames:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundles:(id)a0;

@end
