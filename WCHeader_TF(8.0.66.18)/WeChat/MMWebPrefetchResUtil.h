@interface MMWebPrefetchResUtil : MMObject

+ (id)documentInfoWithDomain:(id)a0 identifier:(id)a1;
+ (unsigned int)documentStatusWithDomain:(id)a0 identifier:(id)a1;
+ (unsigned int)fileStatusWithFilePath:(id)a0 respHeader:(id)a1;
+ (id)dicForRespHeaderOfDocumentWithDomain:(id)a0 identifier:(id)a1;
+ (id)docHTMLStringWithDomain:(id)a0 identifier:(id)a1;
+ (id)reqHeaderForDocumentWithDomain:(id)a0 identifier:(id)a1;
+ (id)pathForDocumentWithDomain:(id)a0 identifier:(id)a1;
+ (id)pathForRespHeaderOfDocumentWithDomain:(id)a0 identifier:(id)a1;
+ (id)dirPathOfDocument;
+ (id)pathForComResWithUrl:(id)a0;
+ (id)localPkgVersionListWithIdentifier:(id)a0;
+ (id)pathForComResPkgWithPackageIdentifier:(id)a0 version:(id)a1;
+ (id)pathForComResPkgHeaderWithPackageIdentifier:(id)a0 version:(id)a1;
+ (id)tempDownloadPathForComResPkg:(id)a0 url:(id)a1;
+ (id)tempDownloadPathForComResPkgHeader:(id)a0 url:(id)a1;
+ (id)packageIdentifierFromUrl:(id)a0;
+ (id)pathForComResRespHeaderWithUrl:(id)a0;
+ (id)dicForRespHeaderWithPath:(id)a0;
+ (id)fileNameForResWithUrl:(id)a0;
+ (id)fileNameForTempDownloadPkg:(id)a0;
+ (id)fileNameForResPkgWithUrl:(id)a0;
+ (id)dirPathOfComResDownload;
+ (id)pathOfCacheDir;
+ (void)clearCacheIfExistWithDomain:(id)a0 identifier:(id)a1;
+ (void)clearAllPreloadResourceCache;
+ (id)valueInLowercaseForField:(id)a0 withHeader:(id)a1;
+ (unsigned int)maxCacheTimeWithRespHeader:(id)a0;
+ (long long)checkUpdateTimeIntervalWithRespHeader:(id)a0;
+ (id)jsApiPermitionArrFromData:(id)a0;

@end
