@class NSString;

@interface TMPrivacyPermissionHandler : NSObject <TMPrivacyPermissionHandler>

@property (nonatomic) long long savedPermissionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)permissionState;
- (id)permssionType;
- (id)init;

@end
