@class NSString, MAHeatMapVectorGridOverlayOptions;

@interface MAHeatMapVectorGridOverlay : MAShape <MAOverlay>

@property (nonatomic) BOOL needUpdateOption;
@property (retain, nonatomic) MAHeatMapVectorGridOverlayOptions *option;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) double altitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)heatMapOverlayWithOption:(id)a0;

- (void)createCppOverlay;
- (id)initHeatMapOverlayWithOption:(id)a0;
- (void)updateCppOverlayOption;
- (void).cxx_destruct;
- (void)dealloc;

@end
