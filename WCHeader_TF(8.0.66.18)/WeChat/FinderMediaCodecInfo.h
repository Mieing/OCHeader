@interface FinderMediaCodecInfo : WXPBGeneratedMessage

@property (nonatomic) float videoScore;
@property (nonatomic) float videoCoverScore;
@property (nonatomic) float videoAudioScore;
@property (nonatomic) float thumbScore;
@property (nonatomic) float hdimgScore;
@property (nonatomic) BOOL hasStickers;
@property (nonatomic) BOOL useAlgorithmCover;
@property (nonatomic) float shareCoverScore;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setShareCoverScore:(float)a0;
- (float)shareCoverScore;
- (void)setUseAlgorithmCover:(BOOL)a0;
- (BOOL)useAlgorithmCover;
- (void)setHasStickers:(BOOL)a0;
- (BOOL)hasStickers;
- (void)setHdimgScore:(float)a0;
- (float)hdimgScore;
- (void)setThumbScore:(float)a0;
- (float)thumbScore;
- (void)setVideoAudioScore:(float)a0;
- (float)videoAudioScore;
- (void)setVideoCoverScore:(float)a0;
- (float)videoCoverScore;
- (void)setVideoScore:(float)a0;
- (float)videoScore;
- (id)archivedWCTValue;

@end
