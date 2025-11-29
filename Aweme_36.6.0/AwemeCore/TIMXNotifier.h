@class NSString, TIMXSDKInstance, TIMXMulticastDelegate;

@interface TIMXNotifier : NSObject <TIMXNotifierProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXMulticastDelegate *observerMulticast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
