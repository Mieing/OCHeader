@interface AWESearchAIGCShareStage : AWEShareBaseStage

+ (Class)aAWESharePrepareURLStageCommonAdapterClass;

- (id)aAWESharePrepareURLStageCommonAdapter;
- (BOOL)shouldShortenURL;
- (void)updateContextWithShortURL:(id)a0 compeletion:(id /* block */)a1;
- (BOOL)shouldFormatLinkString;
- (void)trackLinkCheckWithResult:(BOOL)a0;
- (BOOL)shouldRun;
- (void)run;

@end
