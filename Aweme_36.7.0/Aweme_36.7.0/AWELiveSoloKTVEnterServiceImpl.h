@class NSString;

@interface AWELiveSoloKTVEnterServiceImpl : NSObject <AWERTVMessage, IESLiveSoloKTVEnterService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addListener;
- (void)rtvServiceWillBegin:(id)a0;
- (void)rtvServiceDidBegin:(id)a0;
- (void)rtvServiceWillFinish:(id)a0;
- (void)rtvServiceDidFinish:(id)a0;
- (BOOL)enableEnterSoloKTV;
- (void)removeListener;
- (void)muteLiveVolumeIfNeed:(id)a0;
- (void)showLoginView;
- (void)showAlbumVC:(id)a0 completion:(id /* block */)a1;

@end
