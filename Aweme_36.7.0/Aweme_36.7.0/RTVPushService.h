@class RTVAWELongConnectionBridge, NSString;
@protocol RxInjector;

@interface RTVPushService : NSObject <RTVPushServiceInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVAWELongConnectionBridge *webSocket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
