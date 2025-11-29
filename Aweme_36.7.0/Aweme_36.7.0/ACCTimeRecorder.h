@interface ACCTimeRecorder : NSObject

@property (nonatomic) double start;

- (long long)costMs;
- (id)init;

@end
