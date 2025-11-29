@class NSString, LynxContext;

@interface LynxKryptonLoaderServiceImpl : NSObject <KryptonLoaderService> {
    LynxContext *_weakLynxContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadURLFallback:(id)a0 callback:(id /* block */)a1;

- (id)loadImageData:(id)a0;
- (id)redirectURL:(id)a0;
- (id)initWithLynxContext:(id)a0;
- (void)loadURL:(id)a0 callback:(id /* block */)a1;
- (void)loadURL:(id)a0 withStreamLoadDelegate:(id)a1;
- (id)getLynxGenericResourceFetcher;
- (id)getLynxMediaResourceFetcher;
- (void).cxx_destruct;

@end
