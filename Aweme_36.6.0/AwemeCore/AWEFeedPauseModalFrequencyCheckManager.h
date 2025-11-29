@class AWEFeedPauseModalSnackBar, NSMutableSet;

@interface AWEFeedPauseModalFrequencyCheckManager : NSObject

@property (retain, nonatomic) AWEFeedPauseModalSnackBar *snackBar;
@property (retain, nonatomic) NSMutableSet *closeAwemeSet;
@property (nonatomic) long long closeCount;

+ (id)sharedInstance;

- (id)storageKey;
- (void)didClickCloseComponentWithModel:(id)a0 enterFrom:(id)a1;
- (long long)maxCloseCount;
- (BOOL)satisfiedSingleAwemeFrequencyStrategyWithModel:(id)a0;
- (BOOL)satisfiedSettingsFrequencyStrategyWithModel:(id)a0;
- (void)clearCloseCountCache;
- (void).cxx_destruct;
- (void)setup;

@end
