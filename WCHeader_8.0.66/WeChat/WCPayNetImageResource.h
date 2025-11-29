@class NSString;

@interface WCPayNetImageResource : NSObject <MMImageLoaderObserver>

@property (retain, nonatomic) NSString *m_url;
@property (copy, nonatomic) id /* block */ m_block;
@property (retain, nonatomic) NSString *m_cacheFolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithUrl:(id)a0 cacheFolder:(id)a1;
- (void)startWithBlock:(id /* block */)a0;
- (id)md5ForString:(id)a0;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
