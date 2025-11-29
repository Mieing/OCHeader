@protocol IESMLProtocol;

@interface IESMLMgr : NSObject

@property (weak, nonatomic) id<IESMLProtocol> delegate;

+ (id)sharedInstance;

- (void)setupWithURL:(id)a0 completion:(id /* block */)a1;
- (void)reportDownloadState:(long long)a0;
- (void)innerSetupWithURL:(id)a0 completion:(id /* block */)a1 isLocalResource:(BOOL)a2;
- (void)prepareForSR;
- (void)setupWithLocalURL:(id)a0 completion:(id /* block */)a1;
- (void)clearAllCachedResource;
- (void).cxx_destruct;

@end
