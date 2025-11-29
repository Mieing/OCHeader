@class VEVideoFillConfig, NSString;

@interface VELensConfig : NSObject

@property (nonatomic) int algType;
@property (nonatomic) int backendType;
@property (nonatomic) long long srcAssetDegree;
@property (nonatomic) struct CGSize { double width; double height; } frameSize;
@property (nonatomic) BOOL isLiveCore;
@property (retain, nonatomic) VEVideoFillConfig *videoFillConfig;
@property (nonatomic) unsigned int pixFormat;
@property (retain, nonatomic) NSString *mLUTPath;

- (void).cxx_destruct;

@end
