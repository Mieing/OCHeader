@class NSString, TIMXSDKInstance;

@interface TIMXECOMBaseHandler : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)finish;
- (id)initWithRootObject:(id)a0;

@end
