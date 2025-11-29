@class SKCloudServiceController, SKCloudServiceSetupViewController, MPMediaLibrary, NSString;

@interface AWEAppleMusicManager : NSObject <SKCloudServiceSetupViewControllerDelegate, AWEAppleMusicManagerProtocol>

@property (retain, nonatomic) SKCloudServiceController *cloudServiceController;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) SKCloudServiceSetupViewController *setupVC;
@property (copy, nonatomic) id /* block */ AppleMusicLoginBlock;
@property (nonatomic) BOOL isCloudServiceRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isPlayingByNewStyleInApp;

+ (id)sharedInstance;

- (void)stopUsingApp;
- (void)fetchIsLoggedInWithCompletion:(id /* block */)a0;
- (void)p_linkToAppleMusicFallback;
- (void)loginAppleMusicFromVC:(id)a0 completion:(id /* block */)a1 musicID:(id)a2 extra:(id)a3;
- (void)setDStatusBarStyle:(long long)a0;
- (void)addProductToPlaylist:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldEnableAppleMusicForMusicID:(id)a0;
- (void)loginAppleMusicFromVC:(id)a0 completion:(id /* block */)a1 musicID:(id)a2;
- (void)checkAddToCloudMusicLibraryStatusWithSenderView:(id)a0 productID:(id)a1;
- (void)checkAddToCloudMusicLibraryStatusWithSuccessCompletion:(id /* block */)a0 commonCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cloudServiceSetupViewControllerDidDismiss:(id)a0;

@end
