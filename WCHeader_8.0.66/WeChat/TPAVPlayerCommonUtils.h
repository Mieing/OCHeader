@class NSMutableDictionary;

@interface TPAVPlayerCommonUtils : NSObject {
    NSMutableDictionary *_playbackStateNames;
    NSMutableDictionary *_loadStateNames;
    NSMutableDictionary *_seekSourceNames;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)makePlaybackStateName:(long long)a0;
- (id)makeLoadStateName:(long long)a0;
- (id)makeSeekSourceName:(long long)a0;
- (void).cxx_destruct;

@end
