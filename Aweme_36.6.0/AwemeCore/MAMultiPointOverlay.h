@class NSArray, NSString;

@interface MAMultiPointOverlay : MAShape <MAOverlay>

@property (retain, nonatomic) NSArray *items;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) double altitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createCppOverlay;
- (void)initCppItemWithObjCItem:(void *)a0 srcItem:(id)a1;
- (id)initWithMultiPointItems:(id)a0;
- (void).cxx_destruct;

@end
