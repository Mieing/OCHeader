@class NSString, NSMapTable;

@interface AWELiveCommercialLynxLandingPageHandler : NSObject <AWEBDARifleViewPopupEventProtocol, AWEBDARifleViewDelegate>

@property (copy, nonatomic) NSMapTable *popupViewControllerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)rifleView:(id)a0 didEnterStatus:(unsigned long long)a1;
- (void)handleViewDidAppear:(id)a0;
- (void)handleViewDidDisappear:(id)a0;
- (void)rifleView:(id)a0 willLeaveStatus:(unsigned long long)a1;
- (BOOL)openLynxURL:(id)a0 adInfo:(id)a1 queries:(id)a2 liveInfo:(id)a3;
- (BOOL)isHorizonAppearing;
- (void)rifleViewvDidFirstScreen:(id)a0;
- (void)rifleView:(id)a0 didLoadFailedWithURL:(id)a1 error:(id)a2;
- (id)liveClueKey:(id)a0;
- (id)addAdExtraDataInformation:(id)a0 withSchema:(id)a1;
- (id)floatingLiveViewOfRifleView:(id)a0;
- (void)animateFloatingLiveView:(id)a0 isIn:(BOOL)a1;
- (void)rifleView:(id)a0 closeWithparams:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
