@class NSString;

@interface IESMMAudioSamiConfig : IESMMAudioEffectConfig

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *modelPath;
@property (copy, nonatomic) NSString *configJson;
@property (copy, nonatomic) NSString *denoiseLevel;
@property (copy, nonatomic) NSString *createConfigInfo;
@property (copy, nonatomic) NSString *snrThreshold;
@property (copy, nonatomic) NSString *snrFilePath;
@property (nonatomic) BOOL enableSNR;

- (id)toDicInfo;
- (void)setupDefaultValues;
- (void).cxx_destruct;

@end
