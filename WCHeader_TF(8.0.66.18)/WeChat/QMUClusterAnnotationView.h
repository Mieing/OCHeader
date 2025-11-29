@class UIImageView, UILabel;

@interface QMUClusterAnnotationView : QAnnotationView

@property (retain, nonatomic) UIImageView *background;
@property (retain, nonatomic) UILabel *displayText;

- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
