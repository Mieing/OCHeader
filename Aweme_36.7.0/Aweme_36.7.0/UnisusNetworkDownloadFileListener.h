@interface UnisusNetworkDownloadFileListener : NSObject

@property (copy, nonatomic) id /* block */ downloadStartCompletion;
@property (copy, nonatomic) id /* block */ downloadProgressCompletion;
@property (copy, nonatomic) id /* block */ downloadFailCompletion;
@property (copy, nonatomic) id /* block */ downloadSuccessCompletion;

- (void)onDownloadFailWithError:(long long)a0 code:(int)a1 message:(id)a2;
- (void)onDownloadSuccess;
- (void)onDownloadStart;
- (void)onDownloadFailWithError:(id)a0;
- (void)onDownloadProgress:(float)a0;
- (id)initWithDownloadFileStartCompletion:(id /* block */)a0 withProgressCompletion:(id /* block */)a1 withSuccessCompletion:(id /* block */)a2 withFailCompletion:(id /* block */)a3;
- (void).cxx_destruct;

@end
