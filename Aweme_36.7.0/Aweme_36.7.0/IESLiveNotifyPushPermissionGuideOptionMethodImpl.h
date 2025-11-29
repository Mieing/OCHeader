@class NSString;

@interface IESLiveNotifyPushPermissionGuideOptionMethodImpl : IESLiveNotifyPushPermissionGuideOptionMethod

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *permissionScene;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)handlePushPermissionChangedWithOpen:(BOOL)a0;
- (void).cxx_destruct;

@end
