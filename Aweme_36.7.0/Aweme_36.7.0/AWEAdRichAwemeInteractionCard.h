@class YYLabel, UIButton, UIImageView, NSString, UIView, NSObject, UILabel;
@protocol AWEAdRichAwemeInteractionCardViewModel, AWEAdFeedLearnMoreView;

@interface AWEAdRichAwemeInteractionCard : UIView <AWEAdRichAwemeInteractionCard>

@property (retain, nonatomic) NSObject<AWEAdRichAwemeInteractionCardViewModel> *viewModel;
@property (nonatomic) BOOL fill;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UIView *descriptionLabelHolder;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) UIButton *expandButton;
@property (retain, nonatomic) UIView<AWEAdFeedLearnMoreView> *learnMoreView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attributedTextWithExpanded:(BOOL)a0;
- (void)setupViewModel:(id)a0;
- (void)changeExpandButtonTextWithExpanded:(BOOL)a0;
- (void)animateDescriptionTextWithExpanded:(BOOL)a0;
- (void)addExpandButtonIfNeeded;
- (void)updateSubviewsWithNeedFill:(BOOL)a0;
- (double)fillModeExpandedHeight;
- (double)fillModeInitHeight;
- (void)resetFromFill;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
