@interface TTThreadConfigInfoWrapper : NSObject

@property (nonatomic) struct { long long threadType; double threadPriority; } threadConfigInfo;

- (id)initWithConfigInfo:(struct { long long x0; double x1; })a0;

@end
