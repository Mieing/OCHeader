@class NSString, TIMXSDKInstance;

@interface TIMXErrorHandler : NSObject <TIMXErrorHandlerProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleError:(id)a0;
- (id)initWithRootObject:(id)a0;

@end
