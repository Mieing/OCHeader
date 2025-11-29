@class NSArray, IESLiveKTVChallengeTypeConfig;

@interface IESLiveMultiKTVChallengeLaunchViewModel : NSObject

@property (copy, nonatomic) NSArray *configList;
@property (retain, nonatomic) IESLiveKTVChallengeTypeConfig *selectedConfig;
@property (nonatomic) int currentType;
@property (nonatomic) unsigned long long currentTarget;
@property (nonatomic) unsigned long long customMinValue;
@property (nonatomic) unsigned long long customMaxValue;
@property (copy, nonatomic) NSArray *challengeTypeItems;
@property (copy, nonatomic) NSArray *challengeTargetItems;

- (void)fetchLaunchOptionWithCompletion:(id /* block */)a0;
- (id)tipsWithChallengeType:(int)a0;
- (void)didInputTarget:(unsigned long long)a0;
- (void)openChallenge;
- (void)gotoRulePage;
- (void)didSelectTypeAtIndex:(unsigned long long)a0;
- (BOOL)isCustomTargetItemAtIndex:(unsigned long long)a0;
- (void)didSelectTargetAtIndex:(unsigned long long)a0;
- (id)titleWithChallengeType:(int)a0;
- (void).cxx_destruct;

@end
