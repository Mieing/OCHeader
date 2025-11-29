@class NSString;

@interface IESVSVideoPreloadTask : NSObject

@property (retain, nonatomic) NSString *videoID;
@property (nonatomic) unsigned long long resolution;
@property (nonatomic) long long startLocation;
@property (nonatomic) unsigned long long preloadStstus;

- (id)initWithVideoEngineModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithEpisode:(id)a0;

@end
