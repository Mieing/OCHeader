@class NSMutableArray;

@interface AWEPOIMapViewPool : NSObject

@property (retain, nonatomic) NSMutableArray *mapViewPool;
@property (retain, nonatomic) NSMutableArray *mapViewsInUse;

+ (id)sharedPool;

- (id)fetchMapView;
- (void)returnMapView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
