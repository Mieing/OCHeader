@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMFTSUserDataSource : NSObject <AWEIMFTSDataSourceProtocol>

@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *dataSourceId;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (copy, nonatomic) id /* block */ completion;
@property (copy) id /* block */ filterForDataBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadDataBeforeSortOrder:(long long)a0 withKeywords:(id)a1 contentTypes:(id)a2 conversationId:(id)a3 pageCount:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)loadDataWithConfig:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)cancelTask;

@end
