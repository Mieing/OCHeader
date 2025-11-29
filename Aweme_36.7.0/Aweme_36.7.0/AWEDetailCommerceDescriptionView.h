@class AWEDetailCommerceDescriptionModel, UIButton, UIView, YYLabel;
@protocol AWEDetailCommerceDescriptionViewConfiguration, AWEDetailCommerceDescriptionViewDelegate;

@interface AWEDetailCommerceDescriptionView : UIView

@property (retain, nonatomic) id<AWEDetailCommerceDescriptionViewConfiguration> configuration;
@property (retain, nonatomic) AWEDetailCommerceDescriptionModel *model;
@property (retain, nonatomic) UIView *topSeperateLine;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) UIButton *showMoreButton;
@property (retain, nonatomic) UIButton *showLessButton;
@property (weak, nonatomic) id<AWEDetailCommerceDescriptionViewDelegate> delegate;

- (void)updateToModel:(id)a0 serviceProvider:(id)a1;
- (id)iconButtonWithTitle:(id)a0 icon:(id)a1;
- (void)didTapShowLess:(id)a0;
- (void)didTapShowMore:(id)a0;
- (void)p_updateUIWithModel:(id)a0;
- (id)p_attributedStringForDescriptionText:(id)a0;
- (void)invalidateConstrainsWithShowMore:(BOOL)a0;
- (void)addShowMoreTruncation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void)setupUI;

@end
