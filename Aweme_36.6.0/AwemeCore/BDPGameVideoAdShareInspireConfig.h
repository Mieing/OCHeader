@class NSArray;

@interface BDPGameVideoAdShareInspireConfig : NSObject

@property (nonatomic) long long abTestType;
@property (nonatomic) long long maxShareSuccessTimes;
@property (nonatomic) long long minIntervalTime;
@property (nonatomic) long long isOpenForAllGames;
@property (copy, nonatomic) NSArray *whiteListOfGameID;

- (void).cxx_destruct;

@end
