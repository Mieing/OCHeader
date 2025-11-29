@class NSString;

@interface AWEACCTarotImportImpl : NSObject <ACCTarotImportProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)importAssets:(id)a0 repoContainer:(id)a1 withMode:(unsigned long long)a2 progressHandler:(id /* block */)a3 params:(id)a4 complete:(id /* block */)a5;
- (void)searchTaskWithID:(id)a0 withCompletion:(id /* block */)a1;
- (void)handlePicTemplateTask:(id)a0 targetProject:(id)a1 completion:(id /* block */)a2;
- (void)handlePicTemplateProject:(id)a0 workspace:(id)a1 completion:(id /* block */)a2;
- (void)fetchImage:(id)a0 workspace:(id)a1 forProject:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)fetchTasksWithAssets:(id)a0 taskId:(id)a1 taskProgressBlock:(id /* block */)a2 completion:(id /* block */)a3;

@end
