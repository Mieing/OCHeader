@class NSDate;
@protocol AWEUserLoginDataControllerDelegate;

@interface AWEUserLoginBaseDataController : NSObject

@property (weak, nonatomic) id<AWEUserLoginDataControllerDelegate> delegate;
@property (retain, nonatomic) NSDate *startLoginDate;

- (void)trackLoginEvent:(long long)a0 error:(id)a1;
- (void)updateNextPushVC:(id)a0;
- (id)monitorPageName;
- (void)trackLoginEvent:(long long)a0;
- (void)updateLoginRequestStatus:(long long)a0;
- (void)updateLoginError:(id)a0;
- (void).cxx_destruct;

@end
