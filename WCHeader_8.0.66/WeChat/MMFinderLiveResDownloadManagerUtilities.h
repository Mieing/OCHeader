@interface MMFinderLiveResDownloadManagerUtilities : NSObject

+ (void)validateFileAtPathWithComputedDigest:(id)a0 completionBlock:(id /* block */)a1;
+ (void)computeAndSaveDigestForFileAtPath:(id)a0 completionBlock:(id /* block */)a1;
+ (void)extractExtraDataAtPath:(id)a0 completionBlock:(id /* block */)a1;
+ (void)saveExtraData:(id)a0 forFileAtPath:(id)a1 completionBlock:(id /* block */)a2;

@end
