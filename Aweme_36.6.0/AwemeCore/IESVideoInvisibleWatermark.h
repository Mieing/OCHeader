@class NSString;

@interface IESVideoInvisibleWatermark : NSObject

@property (copy, nonatomic) NSString *watermarkStr;
@property (copy, nonatomic) NSString *algorithmName;
@property (nonatomic) int watermarkInterval;
@property (copy, nonatomic) NSString *modelPath;
@property (copy, nonatomic) NSString *modelPathSec;
@property (nonatomic) int algoVersion;
@property (nonatomic) long long endWaterDuration;
@property (nonatomic) BOOL enableDelayInit;
@property (nonatomic) int pFlag;
@property (nonatomic) int memLazyload;

- (void).cxx_destruct;
- (id)init;

@end
