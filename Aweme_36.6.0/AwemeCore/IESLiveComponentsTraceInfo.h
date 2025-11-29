@interface IESLiveComponentsTraceInfo : NSObject

@property (nonatomic) unsigned long long stage;
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (nonatomic) BOOL finished;

- (double)duration;

@end
