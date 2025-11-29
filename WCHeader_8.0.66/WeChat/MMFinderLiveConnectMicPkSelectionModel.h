@class FinderLiveMicInfo_Wording, NSArray, MMFinderLiveBattleDurationItem, MMFinderLiveConnectMicUsersInfo, MMFinderLiveConnectMicPkSelectionResult;

@interface MMFinderLiveConnectMicPkSelectionModel : NSObject

@property (nonatomic) unsigned long long opponentScenario;
@property (retain, nonatomic) MMFinderLiveConnectMicUsersInfo *connectMicUsersInfo;
@property (retain, nonatomic) FinderLiveMicInfo_Wording *wordings;
@property (retain, nonatomic) NSArray *durationOptions;
@property (retain, nonatomic) MMFinderLiveBattleDurationItem *defaultDurationOption;
@property (retain, nonatomic) MMFinderLiveConnectMicPkSelectionResult *currentPkSelectResult;
@property (nonatomic) BOOL requireChanges;
@property (nonatomic) BOOL disableModifyPlayMode;

- (void).cxx_destruct;

@end
