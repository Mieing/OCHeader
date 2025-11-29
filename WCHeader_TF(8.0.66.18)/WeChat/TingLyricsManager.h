@class NSMutableDictionary, NSMutableArray;

@interface TingLyricsManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *resolverList;
@property (retain, nonatomic) NSMutableArray *pullingLyricsList;

- (void)addResolverForTingItem:(id)a0;
- (void)addResolverForListenId:(id)a0 presetLyric:(id)a1;
- (void)addResolverForListenId:(id)a0 recommendInfo:(id)a1 presetLyric:(id)a2;
- (void)addResolverForListenId:(id)a0;
- (BOOL)addResolverFor:(id)a0 withLyrics:(id)a1;
- (id)resolverFor:(id)a0;
- (id)lyricFor:(id)a0 withCurrentTime:(double)a1;
- (id)lyricsFor:(id)a0 withCurrentTime:(double)a1 preferCount:(unsigned long long)a2;
- (void).cxx_destruct;

@end
