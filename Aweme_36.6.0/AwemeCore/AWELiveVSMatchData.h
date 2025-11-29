@class NSString, AWELiveVSAgainst;

@interface AWELiveVSMatchData : AWEBaseApiModel

@property (retain, nonatomic) NSString *matchID;
@property (retain, nonatomic) NSString *matchTitle;
@property (nonatomic) long long startedTimeUnix;
@property (nonatomic) long long matchStatus;
@property (retain, nonatomic) AWELiveVSAgainst *against;

+ (id)againstJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
