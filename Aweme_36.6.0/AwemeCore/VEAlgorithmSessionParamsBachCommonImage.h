@class NSString, NSArray;

@interface VEAlgorithmSessionParamsBachCommonImage : VEAlgorithmSessionParams

@property (retain, nonatomic) NSString *imagePath;
@property (retain, nonatomic) NSArray *imageBuffers;
@property (nonatomic) unsigned long long imageAlgorithmType;
@property (retain, nonatomic) NSString *algorithmConfigJsonPath;
@property (nonatomic) unsigned long long mattingOutputType;
@property (retain, nonatomic) NSString *mattingOutputDir;
@property (nonatomic) double reframeRatio;

- (void).cxx_destruct;

@end
