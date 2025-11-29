@class MAParticleOverlayOptions, NSString;

@interface MAParticleOverlay : MAShape <MAOverlay>

@property (retain, nonatomic) MAParticleOverlayOptions *overlayOption;
@property (nonatomic) BOOL needUpdateOption;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) double altitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)particleOverlayWithOption:(id)a0;

- (void)createCppOverlay;
- (id)initWithParticleOverlayWithOption:(id)a0;
- (void)buildParticleOverlayOption;
- (void)updateOverlayOption:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })boundingMapRect;

@end
