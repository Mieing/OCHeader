@class NSString, NSDictionary;

@interface IESLiveResouceManagerForFile : IESLiveResouceManager

@property (copy, nonatomic) NSString *bundleFilePrefix;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSDictionary *fileCache;

+ (void)_aweLazyRegisterStaticLoad_Optimize;
+ (void)load;

- (id)getFilePathFromCacheForKey:(id)a0;
- (id)_recursiveGetPathForResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)_recursiveGetPathForResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)initWithAssetBundle:(id)a0 type:(id)a1;
- (id)optimizeGetFilePathWithName:(id)a0 type:(id)a1 dirPath:(id)a2;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;

@end
