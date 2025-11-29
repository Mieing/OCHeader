@class NSDictionary, NSArray, NSString;

@interface TMPrivacyPermissionManager : TMModule <TMPrivacyPermissionService>

@property (copy, nonatomic) NSDictionary *permissionAPIMap;
@property (copy, nonatomic) NSArray *requestPermissionApis;
@property (nonatomic) BOOL shouldAsyncPermissionRequestLog;
@property (copy, nonatomic) NSDictionary *handlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_permissionHandlerClasses;

- (id)permissionTypeOfDataType:(id)a0 methodName:(id)a1 className:(id)a2 params:(id)a3;
- (BOOL)isPermissionRequestWithMethedName:(id)a0 className:(id)a1;
- (long long)permissionStateOfPermissionType:(id)a0;
- (BOOL)shouldAsyncSendPermissionRequestLog;
- (void).cxx_destruct;
- (void)start;
- (id)initWithConfig:(id)a0;
- (void)_loadHandlers;

@end
