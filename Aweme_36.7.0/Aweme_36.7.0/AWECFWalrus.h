@class NSString, NSMutableDictionary;

@interface AWECFWalrus : NSObject

@property (copy, nonatomic) NSString *downloadingUrl;
@property (nonatomic) long long nextUrlIdx;
@property (nonatomic) long long numberOfRetries;
@property (retain, nonatomic) NSMutableDictionary *urlToErrorMapper;

- (BOOL)retryEnabled;
- (id)lastDownloadError;
- (void)bd_dismissViewControllerAnimated:(id)a0 bd_presentModalViewController:(id)a1;
- (void)resetToRetry;
- (void)bd_setNeedsStatusBarAppearanceUpdate:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
