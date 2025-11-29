@class NSMutableDictionary;

@interface DDanmakuTrackLayerMap : NSObject

@property (retain, nonatomic) NSMutableDictionary *typeToTracksMap;

- (id)tracksForType:(id)a0;
- (void)enumerateAllTracksUsingBlock:(id /* block */)a0;
- (void)addTrack:(id)a0 forType:(id)a1;
- (id)popLastTrackForType:(id)a0;
- (void)removeTrack:(id)a0 forType:(id)a1;
- (id)popFirstTrackForType:(id)a0;
- (void)prependTrack:(id)a0 forType:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
