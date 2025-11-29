@class NSArray;

@interface VEAlgorithmSessionResultScan : VEAlgorithmSessionResult

@property (retain, nonatomic) NSArray *objectDectResult;
@property (retain, nonatomic) NSArray *objectTrackResult;
@property (retain, nonatomic) NSArray *objectRecognitionResult;

- (void).cxx_destruct;
- (id)init;

@end
