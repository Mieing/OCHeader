@class NSString;

@interface TMMonitroAlbumPermissionAspector : NSObject <TSPKPermissionAspector>

@property (nonatomic) BOOL permissionCheckSettings;
@property (nonatomic) BOOL permissionDeniedGuideSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handlePermissionResult:(id)a0;
- (void)actionWhenPermissionDenied;

@end
