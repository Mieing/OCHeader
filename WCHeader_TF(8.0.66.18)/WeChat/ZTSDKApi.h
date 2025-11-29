@class NSString;
@protocol SKStoreProductViewControllerDelegate;

@interface ZTSDKApi : NSObject <SKStoreProductViewControllerDelegate>

@property (weak, nonatomic) id<SKStoreProductViewControllerDelegate> storeControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initSDK:(id)a0;
+ (void)initWithDeviceInfo:(id)a0 model:(id)a1 brand:(id)a2 iosver:(id)a3;
+ (void)setLogLevel:(long long)a0;
+ (void)enableDeviceCollect:(BOOL)a0;
+ (void)newOpenUrl:(id)a0 channelInfo:(id)a1 completion:(id /* block */)a2;
+ (void)reportOpenUrl:(id)a0 channelInfo:(id)a1;
+ (void)reportClickEvent:(id)a0;
+ (void)reportExposureEvent:(id)a0;
+ (void)reportOfferEvent:(id)a0;
+ (void)reportSearchEvent:(id)a0 searchword:(id)a1;
+ (void)reportShareEvent:(id)a0 sharetype:(id)a1 sharescene:(id)a2;
+ (void)newJumpToAppStore:(id)a0 channelInfo:(id)a1 completion:(id /* block */)a2;
+ (void)setStoreViewDelegate:(id)a0;
+ (void)newPresentStoreProductViewController:(id)a0 storeId:(id)a1 channelInfo:(id)a2 completion:(id /* block */)a3;
+ (void)addCustomStoreProductVC:(id)a0 storeViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 storeId:(id)a2 channelInfo:(id)a3 completion:(id /* block */)a4;
+ (id)startOpenStoreProductVC:(id)a0 storeViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 productID:(id)a2 report:(id)a3 isFull:(BOOL)a4 completion:(id /* block */)a5;
+ (id)pressentCustomViewControllerFromViewController:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 productIdentifier:(id)a2 isFull:(BOOL)a3 completion:(id /* block */)a4;
+ (void)reportAppstoreEventInfo:(id)a0;
+ (void)DoReportToTDM:(id)a0 report:(id)a1;
+ (void)reportToTDM:(id)a0 report:(id)a1;

@end
