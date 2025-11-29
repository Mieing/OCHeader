@class NSString;

@interface AWELiveLeagueInfo : AWEBaseApiModel

@property (nonatomic) long long leagueId;
@property (retain, nonatomic) NSString *cnnName;
@property (retain, nonatomic) NSString *ennName;
@property (retain, nonatomic) NSString *season;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
