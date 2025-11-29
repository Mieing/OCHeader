@class WCTimelinePOIPickerViewController, MMPickLocationViewController, NSString;
@protocol WALocationServiceDelegate;

@interface WALocationProxy : NSObject <MMPickLocationViewControllerDelegate, WAOpenLocationViewControllerDelegate, WCTimelinePOIPickerViewControllerDelegate, IWALocationService>

@property (retain, nonatomic) MMPickLocationViewController *pickLocationController;
@property (retain, nonatomic) WCTimelinePOIPickerViewController *pickPoiController;
@property (retain, nonatomic) NSString *buttonTitle;
@property (weak, nonatomic) id<WALocationServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createLocationService;
+ (void)initLocationService;
+ (id)getWAQMapAPIKey;
+ (struct CLLocationCoordinate2D { double x0; double x1; })getLastUserLocation;
+ (void)clearLBSCacheIfNeeded;

- (void)openLocation:(id)a0 navigationController:(id)a1;
- (void)choosePoiViewController:(id)a0 buttonTitle:(id)a1;
- (void)chooseLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 viewController:(id)a1 buttonTitle:(id)a2;
- (void)getRegionData;
- (void)onCancelSeletctedLocation;
- (id)onGetRightBarButton;
- (void)onFinishSelectedLocation;
- (void)onCancelOpenLocation;
- (void)onPOIPickerFinished:(id)a0;
- (void)onPOIPickerCancel;
- (void)OnGetGetAllAddressStageData:(id)a0 Error:(id)a1;
- (void).cxx_destruct;

@end
