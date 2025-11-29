@interface LiveReplaySetting : WXPBGeneratedMessage

@property (nonatomic) BOOL autoGenLiveReplay;
@property (nonatomic) BOOL intelligentlyGenReplayHighlight;
@property (nonatomic) BOOL enableReplayDumpDanmu;
@property (nonatomic) BOOL canUseIntelligentlyGenReplayHighlight;

+ (void)initialize;

- (void)setCanUseIntelligentlyGenReplayHighlight:(BOOL)a0;
- (BOOL)canUseIntelligentlyGenReplayHighlight;
- (void)setEnableReplayDumpDanmu:(BOOL)a0;
- (BOOL)enableReplayDumpDanmu;
- (void)setIntelligentlyGenReplayHighlight:(BOOL)a0;
- (BOOL)intelligentlyGenReplayHighlight;
- (void)setAutoGenLiveReplay:(BOOL)a0;
- (BOOL)autoGenLiveReplay;

@end
