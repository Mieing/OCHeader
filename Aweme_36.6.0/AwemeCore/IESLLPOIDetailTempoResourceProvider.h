@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESLLPOIDetailTempoResourceProvider : NSObject <IESLLTempoResourceProviderProtocol>

@property (retain, nonatomic) NSMutableDictionary *urlToCallbacks;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)fetchDataWith:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
