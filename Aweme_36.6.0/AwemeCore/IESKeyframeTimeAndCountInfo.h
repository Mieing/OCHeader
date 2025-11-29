@interface IESKeyframeTimeAndCountInfo : NSObject

@property (nonatomic) unsigned long long earliestTime;
@property (nonatomic) unsigned long long latestTime;
@property (nonatomic) unsigned long long allKeyFrameCount;

- (id)init;
- (void)reset;

@end
