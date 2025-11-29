@class NSString, AnyPromise, WCAccountBindPhoneControlLogic, FinderNewUserPrepareResponse;

@interface WCFinderCreateUserVerifyPhoneLogic : NSObject <VerifyPhoneDelegate>

@property (retain, nonatomic) FinderNewUserPrepareResponse *userPrepare;
@property (retain, nonatomic) AnyPromise *userPreparePromise;
@property (retain, nonatomic) WCAccountBindPhoneControlLogic *bindPhoneLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
