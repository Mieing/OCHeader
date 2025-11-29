@class AWEAwemeModel, UIView, UIButton, AWEScreenCastDescriptionGradientView, YYLabel, UIViewController, UILabel, UIScrollView;

@interface AWEScreenCastDescriptionView : UIView

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UILabel *normalDescriptionLabel;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) AWEScreenCastDescriptionGradientView *scrollViewContainerView;
@property (retain, nonatomic) UIScrollView *descriptionScrollView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) YYLabel *expandLabel;
@property (retain, nonatomic) UIButton *expandButton;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) double totalHeight;
@property (copy, nonatomic) id /* block */ didClickExpandBlock;
@property (copy, nonatomic) id /* block */ descriptionViewHiddenBlock;
@property (weak, nonatomic) UIViewController *container;

- (void)handleConnectionChanged:(id)a0;
- (void)updateAttributedDescriptionLabel;
- (void)updateOptimizeUIDescriptionContent;
- (id)createAttributeStringContent;
- (id)createAttributeStringContentWithoutNewLineCharacter:(BOOL)a0;
- (void)didClickExpandBtn;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateWithModel:(id)a0;

@end
