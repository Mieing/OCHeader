@class NSArray;

@interface HMDModuleConfig : HMDBaseConfig

@property (nonatomic) BOOL disableStartTask;
@property (nonatomic) BOOL enableOpen;
@property (nonatomic) BOOL enableUpload;
@property (copy, nonatomic) NSArray *manualControllerIdentifiers;

+ (id)hmd_attributeMapDictionary;
+ (id)allRemoteModuleClasses;
+ (id)allLocalModuleClasses;
+ (id)loadClassesFromSectionName:(char *)a0;
+ (id)configKey;

- (id)getModule;
- (BOOL)canStartTaskIndependentOfStart;
- (long long)startWeight;
- (long long)compareStartWeight:(id)a0;
- (BOOL)isPreferredIfDebug;
- (void)updateWithAPISettings:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithDictionary:(id)a0;
- (BOOL)canStart;

@end
