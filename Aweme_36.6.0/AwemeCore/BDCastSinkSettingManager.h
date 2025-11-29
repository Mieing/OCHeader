@class NSString;

@interface BDCastSinkSettingManager : NSObject

@property (copy, nonatomic) NSString *ipAddress;
@property (readonly, nonatomic) NSString *versionStr;
@property (copy, nonatomic) NSString *displayName;

+ (id)shareManager;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
