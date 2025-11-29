@interface DitoRunLoopDispatchConfig : NSObject

@property (nonatomic) int taskArrayMaxCount;
@property (nonatomic) int parallelTaskCount;
@property (nonatomic) unsigned long long runLoopMode;

@end
