@class NSString;

@interface NSURLConnectionDelegateProxy : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>

@property (retain, nonatomic) id target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyWithTarget:(id)a0;

- (id)initWithTarget:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didSendBodyData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (void).cxx_destruct;

@end
