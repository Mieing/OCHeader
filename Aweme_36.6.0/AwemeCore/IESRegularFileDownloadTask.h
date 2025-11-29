@class NSArray;

@interface IESRegularFileDownloadTask : IESEffectBaseDownloadTask

@property (copy, nonatomic) NSArray *downloadURLs;

- (id)initWithFileDownloadURLs:(id)a0 destination:(id)a1;
- (void).cxx_destruct;
- (void)startWithCompletion:(id /* block */)a0;

@end
