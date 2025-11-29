@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXRequestManager : NSObject <TIMXInstanceScopeSingleton>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *httpRequestCallbackQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *pbLongConnectionCallbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)encryptResultFromHeaders:(id)a0;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
