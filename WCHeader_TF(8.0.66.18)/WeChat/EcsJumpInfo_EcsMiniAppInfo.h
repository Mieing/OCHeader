@class NSString, EcsJumpInfo_EcsMiniAppInfo_HalfPageConfig;

@interface EcsJumpInfo_EcsMiniAppInfo : WXPBGeneratedMessage

@property (readonly, nonatomic) NSString *jumpId;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *appUsername;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *sceneNote;
@property (nonatomic) unsigned int versionType;
@property (nonatomic) BOOL isHalfPage;
@property (nonatomic) unsigned int launchAnimationType;
@property (nonatomic) BOOL isTransparent;
@property (retain, nonatomic) NSString *extraData;
@property (nonatomic) BOOL isForbidExpandGesture;
@property (nonatomic) BOOL isNoRelaunch;
@property (retain, nonatomic) EcsJumpInfo_EcsMiniAppInfo_HalfPageConfig *halfPageConfig;

+ (void)initialize;

- (void)setHalfPageConfig:(id)a0;
- (id)halfPageConfig;
- (void)setIsNoRelaunch:(BOOL)a0;
- (BOOL)isNoRelaunch;
- (void)setIsForbidExpandGesture:(BOOL)a0;
- (BOOL)isForbidExpandGesture;
- (void)setExtraData:(id)a0;
- (id)extraData;
- (void)setIsTransparent:(BOOL)a0;
- (BOOL)isTransparent;
- (void)setLaunchAnimationType:(unsigned int)a0;
- (unsigned int)launchAnimationType;
- (void)setIsHalfPage:(BOOL)a0;
- (BOOL)isHalfPage;
- (void)setVersionType:(unsigned int)a0;
- (unsigned int)versionType;
- (void)setSceneNote:(id)a0;
- (id)sceneNote;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setPath:(id)a0;
- (id)path;
- (void)setAppUsername:(id)a0;
- (id)appUsername;
- (void)setAppid:(id)a0;
- (id)appid;

@end
