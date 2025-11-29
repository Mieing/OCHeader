@class NSString;

@interface LynxKryptonLoader : NSObject <KryptonLoaderService> {
    id /* block */ _resourceFetcherProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadURLFallback:(id)a0 callback:(id /* block */)a1;

- (id)redirectURL:(id)a0;
- (void)loadURL:(id)a0 callback:(id /* block */)a1;
- (void)loadURL:(id)a0 withStreamLoadDelegate:(id)a1;
- (id)loadImageData:(id)a0;
- (void)setResourceFetcherProvider:(id /* block */)a0;
- (id)getResourceFetcher;
- (void).cxx_destruct;
- (id)init;

@end
