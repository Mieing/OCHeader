@interface LiveReplaySetting : WXPBGeneratedMessage

@property (nonatomic) BOOL autoGenLiveReplay;
@property (nonatomic) BOOL intelligentlyGenReplayHighlight;
@property (nonatomic) BOOL enableReplayDumpDanmu;
@property (nonatomic) BOOL canUseIntelligentlyGenReplayHighlight;

+ (void)initialize;

@end
