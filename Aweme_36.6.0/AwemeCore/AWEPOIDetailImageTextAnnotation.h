@class NSString;

@interface AWEPOIDetailImageTextAnnotation : NSObject <MKAnnotation>

@property (copy, nonatomic) NSString *labelText;
@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) float zPriority;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
