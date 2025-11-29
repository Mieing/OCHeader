@class NSString;

@interface QMUAnnotation : NSObject <QAnnotation, QMUPointItem, NSCopying>

@property (nonatomic) struct { double x; double y; } point;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
