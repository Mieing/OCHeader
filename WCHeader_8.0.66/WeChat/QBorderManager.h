@class QBorder, NSMutableDictionary;

@interface QBorderManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *borderDict;
@property (retain, nonatomic) QBorder *inlandBorder;
@property (retain, nonatomic) QBorder *chinaBorder;
@property (retain, nonatomic) QBorder *dataSafetyInlandBorder;
@property (nonatomic) int version;

+ (id)instance;

- (BOOL)shouldCorrectCoordinateToGCJ02:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (BOOL)chinaContainsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (BOOL)chinaContainsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (BOOL)dataSafetyInlandContainsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (BOOL)checkMapStatus:(id)a0 withLogoSource:(id)a1;
- (BOOL)containsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 in:(id)a1;
- (BOOL)containsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 in:(id)a1;
- (id)getFrontierFilePath;
- (id)readLocalFrontierFile;
- (void)downloadNewFrontierData:(id)a0;
- (BOOL)updateFrontierData:(id)a0;
- (id)init;
- (void)setupSelf;
- (void)setupSelfWithFrontierDict:(id)a0;
- (void)setupBorders;
- (void).cxx_destruct;

@end
