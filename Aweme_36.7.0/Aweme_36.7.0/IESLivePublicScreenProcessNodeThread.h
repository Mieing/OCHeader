@class NSThread;

@interface IESLivePublicScreenProcessNodeThread : NSObject

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSThread *innerThread;

- (void)__stop;
- (id)initWithPublicScreenID:(id)a0;
- (void)executeProcessNodeBlock:(id /* block */)a0;
- (void)initWithRunLoop;
- (void)__executeProcessNodeBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)dealloc;

@end
