@class NSString;

@interface HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sdkKey;
@property (copy, nonatomic) NSString *vCodec;
@property (copy, nonatomic) NSString *resolution;
@property (nonatomic) int level;
@property (nonatomic) int vBitRate;
@property (copy, nonatomic) NSString *additionalContent;
@property (nonatomic) int fps;
@property (nonatomic) int disable;

+ (id)descriptor;

- (int)disable;
- (id)vCodec;
- (int)level;
- (id)resolution;
- (id)sdkKey;
- (id)name;
- (void)setResolution:(id)a0;
- (void)setVBitRate:(int)a0;
- (void)setVCodec:(id)a0;
- (void)setFps:(int)a0;
- (void)setLevel:(int)a0;
- (void)setSdkKey:(id)a0;
- (void)setName:(id)a0;
- (id)aweLiveQuality;

@end
