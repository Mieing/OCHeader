@class NSMutableDictionary;

@interface MMBifrost : NSObject

@property (retain, nonatomic) NSMutableDictionary *trackCacheDict;

+ (id)sharedInstance;
+ (void)cacheTrack:(id)a0;
+ (id)trackForProtocolName:(id)a0 selectorName:(id)a1;
+ (id)responderTargetsForSource:(id)a0 protocol:(id)a1 selector:(SEL)a2;
+ (id)_trackCacheKeyWithProtocolName:(id)a0 selector:(id)a1;

- (void).cxx_destruct;

@end
