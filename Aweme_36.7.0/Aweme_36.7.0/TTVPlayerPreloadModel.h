@class NSString, TTVideoEngineModel;

@interface TTVPlayerPreloadModel : NSObject

@property (copy, nonatomic) NSString *preloadScene;
@property (retain, nonatomic) TTVideoEngineModel *videoEngineModel;
@property (nonatomic) unsigned long long resolution;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
