@class NSMutableDictionary, NSMutableSet;

@interface IESLiveInnerFeedConfigsCacheManager : NSObject

@property (nonatomic) BOOL cacheEnable;
@property (retain, nonatomic) NSMutableDictionary *configFoundCache;
@property (retain, nonatomic) NSMutableSet *configNotFoundCache;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;

@end
