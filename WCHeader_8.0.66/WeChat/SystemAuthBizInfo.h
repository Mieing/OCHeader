@class NSString;

@interface SystemAuthBizInfo : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ scene;
@property (nonatomic, readonly) NSString *title;

+ (void)overSeaUserSwitchCheck;

- (id)initWithScene:(unsigned long long)a0;
- (BOOL)isAuthorizedFor:(unsigned int)a0;
- (void)setAuthStateFor:(unsigned int)a0 isOn:(BOOL)a1;
- (unsigned long long)bitStorageFor:(unsigned int)a0;
- (id)localizedSimpleDescriptionFor:(unsigned int)a0;
- (id)localizedSettingDescriptionFor:(unsigned int)a0;
- (BOOL)entranceEnabled;
- (BOOL)isIngnoreScene;
- (id)init;

@end
