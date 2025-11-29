@class NSString, _TtC6WeChat24SystemAuthCapabilityInfo, SystemAuthBizInfo, LocationRetriever, MMLocatingCoordinateLogic, MMUILabel;

@interface SystemAuthSettingSheetView : MMAutoLayoutSheetView <LocationRetrieveDelegate>

@property (retain, nonatomic) _TtC6WeChat24SystemAuthCapabilityInfo *capabilityInfo;
@property (retain, nonatomic) SystemAuthBizInfo *bizInfo;
@property (retain, nonatomic) MMUILabel *locationLabel;
@property (retain, nonatomic) LocationRetriever *locationRetriever;
@property (retain, nonatomic) MMLocatingCoordinateLogic *locatingLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAuthCapability:(id)a0 scene:(id)a1;
- (void)customArrangeViews;
- (id)genSwitchView:(id)a0;
- (BOOL)isSwitchOn;
- (BOOL)showLocationAddress;
- (void)requestLocationAddress;
- (void)onRetrieveLocationOK:(id)a0;
- (void).cxx_destruct;

@end
