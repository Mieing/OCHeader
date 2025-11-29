@class NSOperationQueue, NSString;

@interface AWEFeedCacheScheFactoryCreator : NSObject <AWEFeedCacheProcessorFactoryCreator>

@property (retain, nonatomic) NSOperationQueue *commonExecutor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)create;

@end
