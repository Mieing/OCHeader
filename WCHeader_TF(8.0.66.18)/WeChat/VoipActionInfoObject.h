@class NSString;

@interface VoipActionInfoObject : MMObject <PBCoding>

@property (nonatomic) BOOL m_hasClickIgnoreCallOnce;
@property (nonatomic) BOOL m_hasClickVoiceMinimizeWithEarMode;
@property (nonatomic) BOOL m_hasClickVideoMinimize;
@property (nonatomic) BOOL m_hasShowEarDeviceUnPluginTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_hasClickIgnoreCallOnce;
+ (void)PBArrayAdd_m_hasClickVoiceMinimizeWithEarMode;
+ (void)PBArrayAdd_m_hasClickVideoMinimize;
+ (void)PBArrayAdd_m_hasShowEarDeviceUnPluginTips;
+ (void)initialize;
+ (id)Instance;
+ (id)getSaveRootDir;
+ (id)getSavePath;

- (id)getPBPropertyTable;
- (id)init;
- (void)saveToFile;

@end
