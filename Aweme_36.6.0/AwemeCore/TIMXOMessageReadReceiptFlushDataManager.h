@class NSString, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXOMessageReadReceiptFlushDataManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *readReceiptQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
