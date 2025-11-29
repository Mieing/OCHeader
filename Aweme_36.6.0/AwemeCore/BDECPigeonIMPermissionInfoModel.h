@class NSDictionary;

@interface BDECPigeonIMPermissionInfoModel : NSObject

@property (nonatomic) BOOL hasPermission;
@property (nonatomic) BOOL shouldForceUpdate;
@property (copy, nonatomic) NSDictionary *forceUpdateData;

- (void).cxx_destruct;

@end
