@class NSString;

@interface CJPayBioVerifyToPasswordUtil : NSObject

@property (copy, nonatomic) NSString *inBackToastText;
@property (copy, nonatomic) NSString *failedToastText;
@property (nonatomic) BOOL isDidBecomeActive;
@property (copy, nonatomic) id /* block */ toastBlock;
@property (copy, nonatomic) id /* block */ verifyFailedBlock;

+ (id)passwordGuide;
+ (id)alertSubTitle;
+ (id)alertConfirmDesc;
+ (id)replaceDollar:(id)a0;
+ (id)alertTitle;

- (void)showToast;
- (void)p_didBecomeActive;
- (void)p_fromBioVerifyFailedNotification:(id)a0;
- (void)p_fromBioVerifyInBackNotification:(id)a0;
- (void)p_didEnterBackgroundNotification;
- (void).cxx_destruct;
- (void)addObserver;

@end
