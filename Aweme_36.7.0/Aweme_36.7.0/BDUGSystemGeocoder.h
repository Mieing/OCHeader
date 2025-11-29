@class CLGeocoder;

@interface BDUGSystemGeocoder : NSObject <NSCopying>

@property (retain, nonatomic) CLGeocoder *geocoder;

+ (id)_placemarkInfoWithCLPlacemark:(id)a0;
+ (id)sharedGeocoder;

- (void)onReceivedDidEnterBackgroundNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reverseGeocodeLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
