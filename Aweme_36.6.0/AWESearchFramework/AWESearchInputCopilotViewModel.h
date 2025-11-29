@class AWESearchAIGCChunkInboxExtra;

@interface AWESearchInputCopilotViewModel : NSObject

@property (nonatomic) long long selectedOptionIndex;
@property (retain, nonatomic) AWESearchAIGCChunkInboxExtra *copilotInfo;
@property (readonly, nonatomic) BOOL copilotViewVisible;
@property (nonatomic) BOOL imageContainerIsAppear;
@property (nonatomic) BOOL isSuperAgentOpen;

+ (id)keyPathsForValuesAffectingCopilotViewVisible;

- (void)trackTrendingShow;
- (void)trackQuestionShow;
- (id)optionTextAtIndex:(long long)a0;
- (id)copilotText;
- (long long)optionsCardCount;
- (void)trackOptionCardShowAtIndex:(long long)a0;
- (void)trackOptionCardClickAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
