@class NSString;

@interface VEAlgorithmMVVideoSegInfo : NSObject

@property (nonatomic) float startTime;
@property (nonatomic) float endTime;
@property (copy, nonatomic) NSString *fragmentId;
@property (nonatomic) float cropRatio;
@property (copy, nonatomic) NSString *materialType;
@property (nonatomic) float sourceDuration;
@property (nonatomic) long long groupId;

- (void).cxx_destruct;

@end
