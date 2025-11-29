@interface TTInstallTracker : NSObject

@property (class, nonatomic) long long sdkInitTime;
@property (class, nonatomic) long long prepareParamTime;
@property (class, nonatomic) long long paramReadyTime;

+ (id)trackFormatErrorException:(id)a0;
+ (void)trackRegister:(id)a0 result:(BOOL)a1;
+ (void)trackActivate:(id)a0 result:(BOOL)a1;
+ (void)trackerWithEvent:(id)a0 params:(id)a1;

@end
