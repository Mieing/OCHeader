@interface MMLiveSEIConnectMicSeatInfo : NSObject

@property (nonatomic) unsigned int st;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double w;
@property (nonatomic) double h;
@property (nonatomic) unsigned long long i;

- (void)updateWithMicSeatInfo:(id)a0;
- (BOOL)isInOtherRoom;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedSeatFrame;

@end
