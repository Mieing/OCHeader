@class AWETaskSpreadMetaTask;

@interface AWETaskSpreadPlayInteractionMetaTaskBuildContext : NSObject

@property (retain, nonatomic) AWETaskSpreadMetaTask *task;

- (void)addBlock:(id /* block */)a0 afterDelay:(double)a1 elementPosition:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)commit;

@end
