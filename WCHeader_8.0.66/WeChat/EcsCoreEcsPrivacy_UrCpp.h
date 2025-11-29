@class NSString;

@interface EcsCoreEcsPrivacy_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsPrivacy_Ur>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)decryptArticle:(id)a0;
- (id)decryptSentence:(id)a0;
- (id)decryptWord:(id)a0;
- (id)convertDecryptArticleReqFromJsonStringList:(id)a0;
- (id)convertDecryptArticleRespToJsonString:(id)a0;
- (void)decryptArticleAsync:(id)a0 callback:(id /* block */)a1;
- (void)decryptSentenceAsync:(id)a0 callback:(id /* block */)a1;
- (void)decryptWordAsync:(id)a0 callback:(id /* block */)a1;
- (id)encryptStr:(id)a0;
- (id)decryptStr:(id)a0;

@end
