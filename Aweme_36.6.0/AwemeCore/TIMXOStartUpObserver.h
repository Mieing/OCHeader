@class NSString, TIMXSDKInstance, TIMXMulticastDelegate;

@interface TIMXOStartUpObserver : NSObject <TIMXStartUpTaskProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) int inbox;
@property (retain, nonatomic) TIMXMulticastDelegate *multicastDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

@end
