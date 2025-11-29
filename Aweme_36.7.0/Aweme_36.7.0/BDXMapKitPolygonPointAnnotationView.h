@class BDXMapKitPolygonPointAnnotationModel, BDXMapKitPointView;

@interface BDXMapKitPolygonPointAnnotationView : MKAnnotationView

@property (retain, nonatomic) BDXMapKitPointView *pointView;
@property (retain, nonatomic) BDXMapKitPolygonPointAnnotationModel *annotationModel;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;

@end
