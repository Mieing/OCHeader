@class UIImageView, AWEPOIDestinationGuideInfoView, UIView, UILabel;

@interface AWEPOIDestinationAnnotationView : MKAnnotationView

@property (retain, nonatomic) UIImageView *directionImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEPOIDestinationGuideInfoView *guideInfoView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setAnnotation:(id)a0;
- (void)setupUI;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;

@end
