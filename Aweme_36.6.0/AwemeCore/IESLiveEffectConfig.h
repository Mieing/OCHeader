@class NSString;

@interface IESLiveEffectConfig : NSObject

@property (nonatomic) BOOL useNewEffectLabAPI;
@property (copy, nonatomic) NSString *algorithmModelPath;
@property (copy, nonatomic) id /* block */ effectResourceLoadStatusBlock;
@property (nonatomic) BOOL enableLandscapDetect;
@property (nonatomic) BOOL openBuildChain;
@property (nonatomic) BOOL usingNewEffectMsgRegister;
@property (nonatomic) BOOL useEffectProcessRawTextureAPI;
@property (nonatomic) BOOL useEffectSetWidthHeightV2;
@property (nonatomic) BOOL enableEffectMultiTrack;
@property (nonatomic) BOOL useAmazing;
@property (copy, nonatomic) NSString *platformConfig;
@property (copy, nonatomic) NSString *effectLicense;
@property (nonatomic) struct CGSize { double width; double height; } frameSize;
@property (nonatomic) BOOL registerEffectMsg;
@property (nonatomic) BOOL forceDetectInFirstThreeFrames;
@property (copy, nonatomic) NSString *effectCacheDirectory;
@property (nonatomic) BOOL enableRoiInfoCallback;
@property (nonatomic) BOOL earMonitorEffectLazyCreate;

+ (void *)getResourceFinder;
+ (void)setResourceFinder:(void *)a0;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
