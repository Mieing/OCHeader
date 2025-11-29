@class NSString;

@interface AFDFeedAwemeVideoPreloadItem : AFDFeedAwemePreloadItem

@property (retain, nonatomic) NSString *scene;

- (void)getPreloadInfoWithCompletion:(id /* block */)a0;
- (id)preloaderForAweme:(id)a0;
- (void).cxx_destruct;
- (void)startWithCompletion:(id /* block */)a0;
- (void)cancel;

@end
