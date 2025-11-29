@class AVAsset;

@interface AWEStudioAIGCVideoFramesExportConfig : NSObject

@property (nonatomic, retain) AVAsset *asset;
@property (nonatomic) struct CGSize { double x0; double x1; } outputSize;
@property (nonatomic) long long desiredFramesCount;
@property (nonatomic) double tolerance;
@property (nonatomic) double desiredStartTime;
@property (nonatomic) double desiredEndTime;

- (void).cxx_destruct;
- (id)init;

@end
