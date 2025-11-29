@class LiveReplaySetting;

@interface FinderLiveAutoGenReplayOption : WXPBGeneratedMessage

@property (nonatomic) unsigned int supportShowAutoGenReplay;
@property (nonatomic) unsigned int supportShowIntelligentlyGenReplayHighlight;
@property (retain, nonatomic) LiveReplaySetting *liveReplaySetting;

+ (void)initialize;

@end
