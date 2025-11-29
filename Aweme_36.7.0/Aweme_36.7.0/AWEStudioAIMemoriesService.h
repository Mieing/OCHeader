@class NSString;

@interface AWEStudioAIMemoriesService : NSObject <AWEStudioAIMemoriesServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tryPerDayFetchOperationAIMemoriesCollectionWithCompletion:(id /* block */)a0;
- (id)init;

@end
