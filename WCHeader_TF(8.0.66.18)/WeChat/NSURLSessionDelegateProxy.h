@class NSString;

@interface NSURLSessionDelegateProxy : NSObject <NSURLSessionDataDelegate>

@property (retain, nonatomic) id target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyWithTarget:(id)a0;

- (id)initWithTarget:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void).cxx_destruct;

@end
