@class NSString, NSDictionary;

@interface IESLiveResouceManagerForImage : IESLiveResouceManager

@property (copy, nonatomic) NSString *imageNamedPrefix;
@property (copy, nonatomic) NSDictionary *fileMap;

+ (void)load;

- (id)initWithAssetBundle:(id)a0 type:(id)a1;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;

@end
