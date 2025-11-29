@class NSString;

@interface ICHBackgroundTaskContext : NSObject

@property (copy, nonatomic) NSString *taskName;
@property (nonatomic) double beginTime;
@property (nonatomic) double expireTime;
@property (retain, nonatomic) id backtraces;

- (void).cxx_destruct;

@end
