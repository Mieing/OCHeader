@class NSString, IESLiveOpenLivePermissionApi, IESLiveOpenLivePermissionModel, NSMutableArray, NSError;

@interface IESLiveGuideCheckPermissionServiceIMP : IESLiveGeneralBaseService <IESLiveGuideCheckPermissionService>

@property (retain, nonatomic) IESLiveOpenLivePermissionApi *permissionApi;
@property (retain, nonatomic) NSMutableArray *blockArray;
@property (retain, nonatomic) IESLiveOpenLivePermissionModel *openLivePermissionModel;
@property (retain, nonatomic) NSError *checkPermissionError;
@property (nonatomic) BOOL isRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)checkPermission;
- (void)checkUserPermission:(id /* block */)a0;
- (void)handleCheckPermission;
- (void).cxx_destruct;

@end
