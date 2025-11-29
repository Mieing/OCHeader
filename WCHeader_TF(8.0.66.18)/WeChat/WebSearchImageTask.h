@class NSString, NSURL;
@protocol WebSearchImageTaskDelegate;

@interface WebSearchImageTask : MMObject <MMImageLoaderObserver> {
    NSURL *_url;
    id<WebSearchImageTaskDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUrl:(id)a0 andDelegate:(id)a1;
- (void)dealloc;
- (void)asynDownloadImage;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
