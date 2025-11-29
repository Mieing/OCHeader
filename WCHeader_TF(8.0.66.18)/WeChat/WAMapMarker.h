@class WAMapAnnotationView, NSString, NSDictionary, QMUClusterAnnotation, UIImage, QIndoorInfo, UIView;

@interface WAMapMarker : QMUAnnotation

@property (nonatomic) BOOL valid;
@property (retain, nonatomic) QIndoorInfo *indoorInfo;
@property (weak, nonatomic) WAMapAnnotationView *annotationView;
@property (weak, nonatomic) QMUClusterAnnotation *cluster;
@property (nonatomic) long long markerId;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double rotate;
@property (nonatomic) double alpha;
@property (nonatomic) double zIndex;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGPoint { double x; double y; } anchor;
@property (nonatomic) struct CGPoint { double x; double y; } calloutAnchor;
@property (nonatomic) BOOL calloutUseCoverView;
@property (retain, nonatomic) UIView *calloutCoverView;
@property (retain, nonatomic) UIView *targetCalloutCoverView;
@property (retain, nonatomic) NSDictionary *callout;
@property (retain, nonatomic) NSDictionary *label;
@property (retain, nonatomic) NSString *userData;
@property (retain, nonatomic) NSString *ariaLabel;
@property (nonatomic) BOOL joinCluster;
@property (nonatomic) unsigned long long collisionType;
@property (nonatomic) unsigned long long collisionTypeCallout;
@property (nonatomic) unsigned long long collisionTypeLabel;
@property (nonatomic) long long collisionRelation;

+ (id)copyCoverView:(id)a0;
+ (void)collectBaseView:(id)a0 inArr:(id)a1;
+ (void)copyLayerProperty:(id)a0 toView:(id)a1;

- (id)createCalloutView;
- (void)tryToCopyCoverViewIfNeed;
- (void)clearCoverView;
- (void).cxx_destruct;

@end
