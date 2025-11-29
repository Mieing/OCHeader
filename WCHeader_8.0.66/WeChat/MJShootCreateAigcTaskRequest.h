@interface MJShootCreateAigcTaskRequest : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithTemplateID:(id)a0 aigcServiceID:(id)a1 userMediaFileAsset:(id)a2 metaData:(id)a3 postEnterScene:(unsigned int)a4 userDynamicParam:(id)a5 successfulBlock:(id /* block */)a6 failedBlock:(id /* block */)a7;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
