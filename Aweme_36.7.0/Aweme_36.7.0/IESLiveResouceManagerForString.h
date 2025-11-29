@class NSArray, NSCache;

@interface IESLiveResouceManagerForString : IESLiveResouceManager

@property (retain, nonatomic) NSArray *tables;
@property (retain, nonatomic) NSCache *stringCache;

+ (void)load;

- (id)initWithAssetBundle:(id)a0 type:(id)a1;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;

@end
