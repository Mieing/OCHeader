@class MMHeadImageAnnotationView, NSString, UserPositionItem;

@interface MMHeadImageAnnotation : MMObject <QAnnotation>

@property (retain, nonatomic) UserPositionItem *userPositionItem;
@property (weak, nonatomic) MMHeadImageAnnotationView *annotationView;
@property (readonly, nonatomic) BOOL showCallout;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserPostionItem:(id)a0;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)setHeading:(double)a0;
- (void)setShowCallout:(BOOL)a0 Animated:(BOOL)a1;
- (void).cxx_destruct;

@end
