@class NSString, NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface AWEPublishTaskTimerInfo : NSObject

@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ timeBlock;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
