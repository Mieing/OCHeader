@class NSString, UIImageView, UIImage, UIView;
@protocol BDKAnnotation;

@interface BDKAnnotationView : UIView

@property (copy, nonatomic) NSString *reuseIdentifier;
@property (nonatomic) long long zIndex;
@property (nonatomic) double angle;
@property (retain, nonatomic) id<BDKAnnotation> annotation;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGPoint { double x; double y; } centerOffset;
@property (nonatomic) struct CGPoint { double x; double y; } calloutOffset;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL canShowCallout;
@property (retain, nonatomic) UIView *leftCalloutAccessoryView;
@property (retain, nonatomic) UIView *rightCalloutAccessoryView;
@property (nonatomic, getter=isDraggable) BOOL draggable;
@property (nonatomic) long long dragState;
@property (nonatomic) BOOL canAdjustPositon;

- (void)startAnnotationAnimation:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)setDragState:(long long)a0 animated:(BOOL)a1;

@end
