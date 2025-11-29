@class NSString;

@interface AWEAIGCBusinessTemplateHandler : NSObject <AWEAIGCBusinessInjectHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)constructionServerRequestDictionaryWithModel:(id)a0 tosImages:(id)a1;
- (void)parseAIProcessServiceResultWith:(id)a0 requestModel:(id)a1 completion:(id /* block */)a2;
- (id)constructionServerRequestJsonStringWithModel:(id)a0 tosImages:(id)a1;
- (void)parseServiceResultWith:(id)a0 requestModel:(id)a1 completion:(id /* block */)a2;
- (id)convertImageWithId:(id)a0 imageTos:(id)a1 source:(id)a2 aigcJson:(id)a3 aigcParams:(id)a4;
- (id)parseWithRequest:(id)a0 resultModel:(id)a1;
- (id)parseWithRequestInOldWay:(id)a0 resultModel:(id)a1;
- (void)downloadPictureWithResult:(id)a0 requestModel:(id)a1 completion:(id /* block */)a2;

@end
