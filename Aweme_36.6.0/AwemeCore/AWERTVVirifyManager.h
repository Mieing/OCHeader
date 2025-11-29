@class NSString;

@interface AWERTVVirifyManager : NSObject <RTVUserVerifyInterface>

@property (nonatomic) unsigned long long userVerifyStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showIdentityVerifyWithTitle:(id)a0 content:(id)a1 scene:(id)a2 ticket:(id)a3 extra:(id)a4 confirmBlock:(id /* block */)a5 closeBlock:(id /* block */)a6 checkCompletion:(id /* block */)a7;
- (unsigned long long)getCurrentUserVerifyStatus;
- (BOOL)isUserRealNameVerifyStatusPassed;

@end
