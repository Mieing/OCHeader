@class UIImageView, AWEPOIStrokeLabel;

@interface AWEPOIDetailImageTextAnnotationView : MKAnnotationView

@property (retain, nonatomic) AWEPOIStrokeLabel *titleLabel;
@property (retain, nonatomic) UIImageView *poiAnchorView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setAnnotation:(id)a0;
- (void)setupUI;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;

@end
