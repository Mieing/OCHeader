@class NSString;

@interface MMPickLocationReporter : NSObject

@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned int scene;
@property (copy, nonatomic) NSString *chatName;

- (void)report11554_Action:(unsigned int)a0 userLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1 lastDragLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a2 openID:(id)a3;
- (void).cxx_destruct;

@end
