@class NSString;

@interface AWEUGLiveSubscribeHandler : NSObject <AWEUGPushGuideLifeCycleProtocol>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribeGuideCallBack:(BOOL)a0 status:(unsigned long long)a1;
- (void).cxx_destruct;

@end
