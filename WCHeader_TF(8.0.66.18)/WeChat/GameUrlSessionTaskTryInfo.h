@interface GameUrlSessionTaskTryInfo : NSObject

@property (nonatomic) BOOL isUsingSimpleDns;
@property (nonatomic) BOOL isReqRedirect;
@property (nonatomic) BOOL forceNoSimpleDns;
@property (nonatomic) unsigned long long errorType;
@property (nonatomic) long long tryIndex;
@property (nonatomic) long long requestTotalCount;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;

- (unsigned long long)getRttMs;

@end
