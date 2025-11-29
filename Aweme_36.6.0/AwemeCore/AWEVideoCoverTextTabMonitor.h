@class NSMutableDictionary;

@interface AWEVideoCoverTextTabMonitor : NSObject

@property (nonatomic) double recommendTextStart;
@property (retain, nonatomic) NSMutableDictionary *stickerTrackInfoMap;
@property (retain, nonatomic) NSMutableDictionary *stickerBeginSelectedMap;

+ (id)defaultMonitor;

- (void)trackRecommendTextStart;
- (void)trackStickerApplyEnd:(id)a0;
- (void)markStickerBeginSelected:(id)a0;
- (void)updateStickerTrackInfo:(id)a0 stickerID:(id)a1;
- (void)trackRecommendTextEnd:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
