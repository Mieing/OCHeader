@class NSString;

@interface GCImageLoader : NSObject <MMImageLoaderObserver>

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) GCImageLoader *selfRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadImageUrl:(id)a0 withComplectionBlock:(id /* block */)a1;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)completeWithImage:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
