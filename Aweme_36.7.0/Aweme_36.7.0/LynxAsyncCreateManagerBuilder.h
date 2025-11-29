@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface LynxAsyncCreateManagerBuilder : NSObject <LynxAsyncManagerCreateBuilderProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long maxConcurrentOperationCount;
@property (nonatomic) unsigned long long cacheCountLimit;
@property (nonatomic) unsigned long long cacheTotalCostLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
