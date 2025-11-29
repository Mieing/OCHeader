@class NSString, Protocol;

@interface ACCImageAlbumFeatureServiceDependence : NSObject

@property (readonly, copy, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) Protocol *serviceProtocol;
@property (readonly, nonatomic) Class implClass;

- (id)initWithPropertyName:(id)a0 protocol:(id)a1 implClass:(Class)a2;
- (void).cxx_destruct;

@end
