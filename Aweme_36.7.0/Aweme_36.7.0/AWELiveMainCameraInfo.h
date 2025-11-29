@class AWELiveVSMatchData, NSArray, NSNumber, AWELiveLeagueInfo;

@interface AWELiveMainCameraInfo : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *vsContentId;
@property (retain, nonatomic) AWELiveVSMatchData *matchData;
@property (nonatomic) long long matchId;
@property (retain, nonatomic) NSArray *eventIdList;
@property (nonatomic) long long contentId;
@property (retain, nonatomic) AWELiveLeagueInfo *leagueInfo;
@property (nonatomic) BOOL isDisplayScore;

+ (id)matchDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
