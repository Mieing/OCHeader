@class NSString;

@interface IESWebViewHotsoonHandler : NSObject

@property (copy) NSString *handlerName;
@property (copy, nonatomic) id /* block */ consoleLogHandler;

+ (BOOL)conformsToProtocol:(id)a0;

- (void)viewController:(id)a0 handleContent:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
