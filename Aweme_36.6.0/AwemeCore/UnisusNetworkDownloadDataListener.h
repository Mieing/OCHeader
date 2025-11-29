@interface UnisusNetworkDownloadDataListener : NSObject

@property (copy, nonatomic) id /* block */ downloadStartCompletion;
@property (copy, nonatomic) id /* block */ downloadDataArrived;
@property (copy, nonatomic) id /* block */ downloadFailCompletion;
@property (copy, nonatomic) id /* block */ downloadSuccessCompletion;

- (void)onDownloadDataArrived:(id)a0;
- (void)onDownloadFailWithError:(long long)a0 code:(int)a1 message:(id)a2;
- (void)onDownloadSuccess;
- (void)onDownloadStart;
- (void)onDownloadFailWithError:(id)a0;
- (id)initWithDownloadDataStartCompletion:(id /* block */)a0 withDataArrivedCompletion:(id /* block */)a1 withSuccessCompletion:(id /* block */)a2 withFailCompletion:(id /* block */)a3;
- (void).cxx_destruct;

@end
