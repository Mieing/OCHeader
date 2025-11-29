@class NSDictionary;

@interface AWEPlayAiToTextConfigManager : NSObject

@property (copy, nonatomic) NSDictionary *config;

+ (id)sharedManager;

- (BOOL)hasTranscribeText:(id)a0 referString:(id)a1;
- (id)panelTitle;
- (BOOL)shouldAITextEntranceInLongPressPanelWithModel:(id)a0 referString:(id)a1;
- (BOOL)enableAIText;
- (BOOL)isEntranceInPanel;
- (id)longPressPaelEntranceTitle;
- (BOOL)shouldAITextTagInMarqueeActiveWithModel:(id)a0 referString:(id)a1;
- (BOOL)shouldAITextTagActiveWithModel:(id)a0 referString:(id)a1;
- (BOOL)isReplaceMarqueeStyle;
- (BOOL)isEntranceInMarqueeStyle;
- (BOOL)hasTranscribeTextWithAweme:(id)a0 referString:(id)a1;
- (BOOL)shouleTrackForAIText:(id)a0 referString:(id)a1;
- (long long)secondOfDelayShow;
- (BOOL)hasBottomInteraction;
- (BOOL)hasSearchEntrance;
- (BOOL)hasForwardEntrance;
- (id)textAreaBottomTips;
- (id)forwardSentenceTitle;
- (void).cxx_destruct;

@end
