@class NSCache;

@interface IESAlgorithmModelNameCacheCenter : NSObject

@property (retain, nonatomic) NSCache *algorithmModelNameCache;
@property (retain, nonatomic) NSCache *requirementAlgorithmModelNameCache;

+ (id)sharedCeneter;

- (void).cxx_destruct;
- (id)init;

@end
