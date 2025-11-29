@class VideoEncodeParams;

@interface ABAReportPrams : NSObject

@property (nonatomic) int averageQP;
@property (nonatomic) int averageMV;
@property (nonatomic) int skipMode;
@property (nonatomic) int intraMode;
@property (nonatomic) int interMode;
@property (nonatomic) int skipReadQP;
@property (nonatomic) int ratioBitrateQP;
@property (nonatomic) int complexity;
@property (nonatomic) int qualityLevel;
@property (nonatomic) float auQualityLevel;
@property (nonatomic) BOOL useEncodeParams;
@property (retain, nonatomic) VideoEncodeParams *videoEncodeParams;
@property (nonatomic) BOOL useABA;
@property (nonatomic) BOOL skipVideoCompress;
@property (nonatomic) BOOL inputVideoIsVFR;
@property (nonatomic) double inputVideoMaxFps;
@property (nonatomic) double inputVideoMinFps;
@property (nonatomic) BOOL vcodec2Preset;

- (id)init;
- (void).cxx_destruct;

@end
