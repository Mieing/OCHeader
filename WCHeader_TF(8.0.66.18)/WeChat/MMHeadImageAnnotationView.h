@class UIButton, NSString, UIImageView, MMHeadImageView;

@interface MMHeadImageAnnotationView : QAnnotationView <UIGestureRecognizerDelegate> {
    UIImageView *_annotationView;
    MMHeadImageView *_headImageView;
    UIButton *_calloutButton;
    UIImageView *_headingImageView;
}

@property (retain, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)setShowCallout:(BOOL)a0 Animated:(BOOL)a1;
- (void)stopAnnimation:(BOOL)a0;
- (void)bringToFront;
- (void)setHeading:(double)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
