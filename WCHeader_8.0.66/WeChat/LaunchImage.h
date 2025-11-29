@class NSString;

@interface LaunchImage : NSObject <PBCoding, MMResourceMgrExt>

@property (nonatomic) unsigned int uiBeginTime;
@property (nonatomic) unsigned int uiEndTime;
@property (nonatomic) unsigned int uiResType;
@property (nonatomic) unsigned int uiResSubType;
@property (nonatomic) unsigned int uiResVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_uiBeginTime;
+ (void)PBArrayAdd_uiEndTime;
+ (void)PBArrayAdd_uiResType;
+ (void)PBArrayAdd_uiResSubType;
+ (void)PBArrayAdd_uiResVersion;
+ (void)initialize;
+ (id)GetLaunchImagePath;
+ (id)GetLaunchImageConfigPath;
+ (id)loadLaunchImage;
+ (void)saveLaunchImage:(id)a0;
+ (id)parseChangeLaunchImage:(id)a0;
+ (void)parseLaunchImage:(id)a0 fromMsg:(id)a1;

- (id)getPBPropertyTable;
- (id)init;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void)onResDeleteFinishWithResType:(unsigned int)a0 subResType:(unsigned int)a1;
- (void)checkResouce;

@end
