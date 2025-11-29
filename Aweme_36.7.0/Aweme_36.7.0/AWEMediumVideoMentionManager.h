@class NSCache;

@interface AWEMediumVideoMentionManager : NSObject

@property (retain, nonatomic) NSCache *mentionModels;

+ (id)sharedManager;

- (void)fetchMentionListWithModel:(id)a0 completion:(id /* block */)a1;
- (long long)getIndexWithPlaybackTime:(double)a0 model:(id)a1;
- (void).cxx_destruct;

@end
