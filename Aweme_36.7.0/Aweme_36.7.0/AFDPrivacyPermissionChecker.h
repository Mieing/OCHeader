@class NSString, NSMutableDictionary;

@interface AFDPrivacyPermissionChecker : NSObject <AWEPublishTaskMessage, AFDPrivacyPermissionCheckerProtocol>

@property (retain, nonatomic) NSMutableDictionary *containers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)checkValidPrivacyPermissionTypeWithAction:(id)a0;
- (void)clearCachesWithCreateId:(id)a0;
- (id)containerForCreateId:(id)a0;
- (void)checkPrivacyRecordWithAction:(id)a0 needRecord:(BOOL)a1;
- (void)checkPrivacyVisibilityWithAction:(id)a0 container:(id)a1 checkHandler:(id /* block */)a2;
- (void)checkPrivacyRoutesWithAction:(id)a0 container:(id)a1 checkHandler:(id /* block */)a2;
- (id)privacyRouteDowngrade;
- (BOOL)hitRuleWithAction:(id)a0 container:(id)a1 downgradeKey:(id)a2 downgradeValue:(id)a3;
- (long long)toPrivacyPermissionTypeWithAction:(id)a0 toTypeStr:(id)a1;
- (id)typeStringWithAction:(id)a0;
- (BOOL)hitRouteWithContainer:(id)a0 downgradeRoute:(id)a1;
- (BOOL)isValidDowngradeRoute:(id)a0;
- (id)privacyVisibilityDowngrade;
- (BOOL)isValidPrivacyPermissionType:(long long)a0 actionAwemeType:(unsigned long long)a1;
- (void)compareAction:(id)a0 recordPermissionAction:(id)a1;
- (long long)privacyCreateIdLimit;
- (long long)privacyRouteLimit;
- (void)addAction:(id)a0 checkHandler:(id /* block */)a1;
- (void)checkPrivacyRecordWithCreateId:(id)a0 privacyPermissionType:(long long)a1 actionAwemeType:(unsigned long long)a2;
- (id)routesAndValuesWithCreateId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
