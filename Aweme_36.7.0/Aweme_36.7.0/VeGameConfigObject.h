@class NSString, NSDictionary, NSArray;

@interface VeGameConfigObject : NSObject

@property (copy, nonatomic) NSString *ak;
@property (copy, nonatomic) NSString *sk;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *customGameId;
@property (copy, nonatomic) NSString *roundId;
@property (copy, nonatomic) NSString *planId;
@property (copy, nonatomic) NSString *userTag;
@property (copy, nonatomic) NSString *reservedId;
@property (nonatomic) BOOL rtcMultiCreate;
@property (nonatomic) BOOL externalRendering;
@property (retain, nonatomic) NSDictionary *rtcCreateParameters;
@property (nonatomic) long long autoRecycleTime;
@property (nonatomic) long long videoStreamProfileId;
@property (retain, nonatomic) NSArray *userProfilePathList;
@property (retain, nonatomic) NSDictionary *extraDict;
@property (retain, nonatomic) NSDictionary *extraParameters;

- (void).cxx_destruct;

@end
