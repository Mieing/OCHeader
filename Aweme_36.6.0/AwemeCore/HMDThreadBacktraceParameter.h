@interface HMDThreadBacktraceParameter : NSObject

@property (nonatomic) unsigned int keyThread;
@property (nonatomic) BOOL isGetMainThread;
@property (nonatomic) unsigned long long maxThreadCount;
@property (nonatomic) unsigned long long skippedDepth;
@property (nonatomic) BOOL suspend;
@property (nonatomic) BOOL needDebugSymbol;

- (id)init;

@end
