@class NSString, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXClient : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mappingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nameForRequestMethod:(unsigned long long)a0;

@end
