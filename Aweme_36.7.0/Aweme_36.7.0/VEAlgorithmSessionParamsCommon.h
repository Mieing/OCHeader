@class NSString, NSArray, VEAlgorithmSessionCommonAlgoInfo;

@interface VEAlgorithmSessionParamsCommon : VEAlgorithmSessionParams

@property (nonatomic) int frameType;
@property (nonatomic) int extractFrameFPS;
@property (retain, nonatomic) NSString *configPath;
@property (retain, nonatomic) NSString *cacheDir;
@property (retain, nonatomic) NSString *modelDir;
@property (retain, nonatomic) NSString *applicationName;
@property (retain, nonatomic) NSString *videoPath;
@property (nonatomic) double trimIn;
@property (nonatomic) double trimOut;
@property (retain, nonatomic) VEAlgorithmSessionCommonAlgoInfo *info;
@property (retain, nonatomic) NSArray *imagePaths;
@property (retain, nonatomic) NSArray *timeVectorUS;

- (void).cxx_destruct;

@end
