@interface AWEMusicStreamingImpl.LunaModelConvert : NSObject

+ (void)updateFeedViewModel:(id)a0 track:(id)a1;
+ (void)updateFeedViewModel:(id)a0 trackInfo:(id)a1;
+ (void)updateFeedViewModel:(id)a0 video:(id)a1;
+ (void)updateFeedViewModel:(id)a0 videoInfo:(id)a1;
+ (id)convertLunaTrackInfo:(id)a0;
+ (id)convertLunaTrack:(id)a0;
+ (id)convertLunaVideoInfo:(id)a0;
+ (id)convertLunaVideo:(id)a0;

- (id)init;

@end
