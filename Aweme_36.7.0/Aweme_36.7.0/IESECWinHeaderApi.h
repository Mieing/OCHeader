@class NSString;

@interface IESECWinHeaderApi : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *ec_extra;
@property (copy, nonatomic) NSString *passThroughAPI;
@property (nonatomic) long long upgradeVersion;

- (void)fetchWindowHeaderIsPrefetch:(BOOL)a0 withCompletion:(id /* block */)a1 metricsBlock:(id /* block */)a2;
- (void)windowFollowWithCompletion:(id /* block */)a0;
- (void)windowUnfollowWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
