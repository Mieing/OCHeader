@class NSString;

@interface AWEAIGCBusinessTemplateV2Handler : NSObject <AWEAIGCBusinessInjectHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)downloadResultResourceWithResourceMap:(id)a0 requestResourceCount:(long long)a1 ignoreResourceCountCheck:(BOOL)a2 ignoreNonFatalError:(BOOL)a3 targetFolder:(id)a4 completion:(id /* block */)a5;
+ (id)fetchResultAbstractWithResourceMap:(id)a0;
+ (void)_downloadResourceWithResultAbstract:(id)a0 targetFolder:(id)a1 ignoreNonFatalError:(BOOL)a2 coverResource:(id)a3 completion:(id /* block */)a4;

- (id)constructionServerRequestDictionaryWithModel:(id)a0 tosImages:(id)a1;
- (void)parseAIProcessServiceResultWith:(id)a0 requestModel:(id)a1 completion:(id /* block */)a2;
- (id)constructionServerRequestJsonStringWithModel:(id)a0 tosImages:(id)a1;
- (void)parseServiceResultWith:(id)a0 requestModel:(id)a1 completion:(id /* block */)a2;
- (id)generateEffectParam:(id)a0 tosImages:(id)a1;
- (id)generateResourceList:(id)a0 tosImages:(id)a1;
- (id)convertToGraphWithResourceInfo:(id)a0 isAsync:(BOOL)a1 imageTos:(id)a2;

@end
