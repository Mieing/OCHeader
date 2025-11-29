@class NSString;

@interface AWEIMUserActiveLevelManager : NSObject <AWEUserMessage>

@property (nonatomic) long long innerCurrentLoginUserActiveLevel;
@property (nonatomic) BOOL currentLoginUserActiveLevelTypeIsValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)refreshUserActiveLevelTimeInterval;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (long long)currentLoginUserActiveLevel;
- (void)p_saveUserActiveLevel:(long long)a0;
- (void)p_requestUserActiveLevelWithSecUids:(id)a0 completion:(id /* block */)a1;
- (void)p_checkRefreshTimeInterval:(id /* block */)a0;
- (void)refreshUserActiveLevelIfNeeded;
- (id)init;
- (void)dealloc;

@end
