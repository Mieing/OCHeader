@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMFTSConversationDataSource : NSObject <AWEIMFTSDataSourceProtocol>

@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *dataSourceId;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (copy, nonatomic) id /* block */ completion;
@property (copy) id /* block */ filterForDataBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
