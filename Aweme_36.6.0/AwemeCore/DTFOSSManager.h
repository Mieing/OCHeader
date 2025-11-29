@interface DTFOSSManager : NSObject

+ (id)urlEncode:(id)a0;
+ (id)buildUploadData:(id)a0 fileName:(id)a1 fileNamePrefix:(id)a2 fileType:(id)a3;
+ (void)uploadWithParams:(id)a0 completionBlock:(id /* block */)a1;
+ (id)generatePresignedUrlWithAccessKeyId:(id)a0 accessKeySecret:(id)a1 securityToken:(id)a2 endPoint:(id)a3 bucketName:(id)a4 objectName:(id)a5 expiration:(id)a6;
+ (id)canonicalStringWithBucketName:(id)a0 objectName:(id)a1 expires:(id)a2 securityToken:(id)a3;
+ (id)paramToQueryString:(id)a0;
+ (id)computeSignatureWithKey:(id)a0 data:(id)a1;
+ (id)determineFinalEndpoint:(id)a0 bucketName:(id)a1;
+ (id)buildCanonicalHost:(id)a0 bucketName:(id)a1;

@end
