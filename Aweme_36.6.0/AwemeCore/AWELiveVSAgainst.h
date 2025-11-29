@class NSString, AWEURLModel;

@interface AWELiveVSAgainst : AWEBaseApiModel

@property (retain, nonatomic) NSString *leftName;
@property (retain, nonatomic) AWEURLModel *leftLogo;
@property (retain, nonatomic) NSString *leftGoal;
@property (retain, nonatomic) NSString *rightName;
@property (retain, nonatomic) AWEURLModel *rightLogo;
@property (retain, nonatomic) NSString *rightGoal;
@property (nonatomic) long long version;
@property (nonatomic) long long dataTimeStamp;
@property (nonatomic) long long diffSei2AbsSecond;
@property (nonatomic) long long matchId;

+ (id)leftLogoURLJSONTransformer;
+ (id)rightLogoURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
