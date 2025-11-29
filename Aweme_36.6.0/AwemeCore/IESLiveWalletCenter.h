@class NSString, NSMutableDictionary;

@interface IESLiveWalletCenter : NSObject <IESLiveWalletInterface>

@property (retain, nonatomic) NSMutableDictionary *trackDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)openWalletControllerWithParams:(id)a0;
- (void)transitionToWalletControllerFromAppStore;
- (void)transitionToMyChangeControllerWithTrackInfo:(id)a0;
- (void)transitionToFansClubLightUpController;
- (void)transitionToWalletCoinControllerWithTrackInfo:(id)a0;
- (BOOL)isLightMode;
- (void).cxx_destruct;

@end
