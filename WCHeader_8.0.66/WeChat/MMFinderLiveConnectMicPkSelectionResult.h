@class MMFinderLiveBattleDurationItem;
@protocol MMFinderLivePkWinningConditionArguments;

@interface MMFinderLiveConnectMicPkSelectionResult : NSObject

@property (nonatomic) unsigned long long opponentScenario;
@property (nonatomic) unsigned long long selectedMode;
@property (nonatomic) BOOL anchorParticipating;
@property (nonatomic) BOOL audienceParticipating;
@property (nonatomic) unsigned long long selectedWinningCondition;
@property (retain, nonatomic) id<MMFinderLivePkWinningConditionArguments> winningConditionArguments;
@property (retain, nonatomic) MMFinderLiveBattleDurationItem *selectedDuration;
@property (nonatomic) BOOL interactive;
@property (nonatomic) unsigned long long selectedLayoutMode;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
