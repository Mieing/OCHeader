@class NSDictionary, SystemAuthConfig;

@interface SystemAuthConfigurator : NSObject

@property (retain, nonatomic) SystemAuthConfig *defaultConfig;
@property (retain, nonatomic) SystemAuthConfig *updatedConfig;
@property (readonly, nonatomic) SystemAuthConfig *curConfig;
@property (readonly, nonatomic) NSDictionary *webSceneMap;

- (id)init;
- (void)updateResource;
- (id)updatedResourcePath;
- (id)updatedResourceFilePath;
- (id)tempResourceFilePath;
- (id)appDefaultResoucePath;
- (void).cxx_destruct;

@end
