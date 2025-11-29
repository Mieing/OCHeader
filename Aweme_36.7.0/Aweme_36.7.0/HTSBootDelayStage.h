@class AWEBootConfigQueue, NSString;

@interface HTSBootDelayStage : NSObject

@property (retain, nonatomic) AWEBootConfigQueue *mainQueue;
@property (retain, nonatomic) AWEBootConfigQueue *idleQueue;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL validExist;

- (id)initWithValidExist:(BOOL)a0 qos:(unsigned int)a1;
- (void).cxx_destruct;

@end
