@class NSBundle, RxScheduler, YYMemoryCache, RxPromise, NSString;
@protocol RxInjector;

@interface RTVVoipResourceFetcher : NSObject <RTVVoipResourceFetcherInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) RxScheduler *scheduler;
@property (retain, nonatomic) RxPromise *resourceDownloadPromise;
@property (retain, nonatomic) YYMemoryCache *imageCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)__imageWithName:(id)a0;
- (id)fetchRemoteImageWithName:(id)a0;
- (id)fetchRemoteThemeImageWithName:(id)a0;
- (id)resourcePathWithName:(id)a0;
- (id)filePathWithName:(id)a0 geckoChannel:(id)a1;
- (void)invokeRemoteResourceZipDownload;
- (id)lottieFilePathWithName:(id)a0;
- (id)remoteImageWithName:(id)a0;
- (id)p_generateMainCache;
- (id)__imageResourceChannel;
- (id)__lottieFilePathWithName:(id)a0;
- (id)__downloadResourceIfNeeded;
- (id)__remoteImageWithName:(id)a0 ignoreTheme:(BOOL)a1;
- (id)__fetchRemoteImageWithName:(id)a0 ignoreTheme:(BOOL)a1;
- (id)__imagePathWithImageName:(id)a0 ignoreTheme:(BOOL)a1;
- (void).cxx_destruct;
- (id)imageNamed:(id)a0;

@end
