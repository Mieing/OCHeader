@class NSArray, NSString, NSMutableArray, MACustomBuildingOverlayOption;

@interface MACustomBuildingOverlay : MAShape <MAOverlay> {
    struct MAMapRect { struct MAMapPoint { double x; double y; } origin; struct MAMapSize { double width; double height; } size; } _optionsBoundingMapRect;
}

@property (retain, nonatomic) MACustomBuildingOverlayOption *defaultOption;
@property (retain, nonatomic) NSMutableArray *overlayOptions;
@property (nonatomic) BOOL needUpdateOptions;
@property (readonly, nonatomic) NSArray *customOptions;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) double altitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createDefaultWroldwideOption;
- (void)calculateBoundingMapRect;
- (void)onBuildingOptionUpdateNotification:(id)a0;
- (void)addCustomOption:(id)a0;
- (void)removeCustomOption:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })boundingMapRect;

@end
