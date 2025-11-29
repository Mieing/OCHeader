@interface IESLiveComponentLevelInfo : NSObject

@property (nonatomic) long long level;
@property (nonatomic) double finishedTime;
@property (nonatomic) double waitDuration;
@property (weak, nonatomic) IESLiveComponentLevelInfo *previousLevelInfo;

- (BOOL)canLoadCurrent;
- (void).cxx_destruct;

@end
