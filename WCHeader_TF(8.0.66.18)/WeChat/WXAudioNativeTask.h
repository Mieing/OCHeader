@class NSThread;

@interface WXAudioNativeTask : NSObject

@property (nonatomic) struct IMBNativeInterface { void /* function */ **x0; } *interface;
@property (retain, nonatomic) NSThread *thread;

- (void)run:(long long)a0;
- (void)update:(id)a0;
- (void).cxx_destruct;

@end
