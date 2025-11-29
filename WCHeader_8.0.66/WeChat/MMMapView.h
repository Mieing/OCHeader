@interface MMMapView : QMapView

@property (nonatomic) unsigned int actionType;

+ (BOOL)enableOverseaServerProtocol;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (id)userLocation;
- (void)mapViewLogger:(id)a0 logMessage:(id)a1;

@end
