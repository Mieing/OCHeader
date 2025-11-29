@interface AWEVCDShouldRequestManager : NSObject

@property (class, nonatomic) BOOL hasAlertAuthorizeAccount;
@property (class, nonatomic) BOOL hasAlertAuthorizeRelation;

+ (BOOL)isRegisterFromHotsoon;
+ (Class)aAWEVCDAuthorizeCommonAdapterClass;
+ (BOOL)shouldRequestRelation;
+ (BOOL)shouldRequestAccount;

- (id)aAWEVCDAuthorizeCommonAdapter;

@end
