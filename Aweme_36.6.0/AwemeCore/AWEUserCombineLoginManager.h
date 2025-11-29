@class NSArray;
@protocol AWEUserCombineLoginUser;

@interface AWEUserCombineLoginManager : NSObject

@property (copy, nonatomic) NSArray *combineUsers;
@property (retain, nonatomic) id<AWEUserCombineLoginUser> sharedUser;

+ (id)sharedInstance;

- (void)enableShowCombineLogin:(id /* block */)a0;
- (id)querySharedLoginUser;
- (void)queryCanShowUsers;
- (BOOL)canShowCombineLogin;
- (id)queryTrustLoginUsers;
- (void)appendMonitorParamsWithRequest:(id)a0;
- (BOOL)isPossibleLoginSuccessByRequest:(id)a0 sharedUser:(id)a1;
- (BOOL)isPossibleMatchMaskMobile:(id)a0 withPhoneNumber:(id)a1;
- (id)combineLoginUsers;
- (BOOL)shouldJumpCombineLoginWithRequest:(id)a0;
- (BOOL)canJumpAuthWithUser:(id)a0;
- (void).cxx_destruct;

@end
