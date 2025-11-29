@class NSOperationQueue;

@interface IESLiveLiveHighlightTranscodingMethodImpl : IESLiveLiveHighlightTranscodingMethod

@property (retain, nonatomic) NSOperationQueue *downloadQueue;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)downloadTses:(id)a0 completion:(id /* block */)a1;
- (void)createHighlightFileDirectoryWithMaxStorage:(long long)a0;
- (BOOL)hasFileInDirectory:(id)a0 fileName:(id)a1;
- (id)checkTrandCodeResult:(id)a0;
- (void)deleteEarliestFileInCachePath:(id)a0;
- (void).cxx_destruct;

@end
