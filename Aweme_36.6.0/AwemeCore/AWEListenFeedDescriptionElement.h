@class UIScrollView, YYLabel, UIButton, UIImage, UILabel, UIView, AWEListenFeedDescriptionGradientView;

@interface AWEListenFeedDescriptionElement : AWEListenFeedInteractionBaseElement

@property (retain, nonatomic) UILabel *normalDescriptionLabel;
@property (retain, nonatomic) UIImage *circleSeperatorImage;
@property (retain, nonatomic) UIImage *seperatorImage;
@property (retain, nonatomic) UIImage *mixImage;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) AWEListenFeedDescriptionGradientView *scrollViewContainerView;
@property (retain, nonatomic) UIScrollView *descriptionScrollView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) YYLabel *expandLabel;
@property (retain, nonatomic) UIButton *expandButton;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) double totalHeight;

- (void)handleConnectionChanged:(id)a0;
- (void)updateWithModel:(id)a0 playModel:(id)a1 extendModelArray:(id)a2 mixVideoModel:(id)a3 currentModelIndex:(long long)a4 context:(id)a5;
- (void)updateWithModel:(id)a0 playModel:(id)a1 context:(id)a2;
- (void)prepareForReuseVC;
- (void)updateAttributedDescriptionLabel;
- (void)updateOptimizeUIDescriptionContent;
- (id)createAttributeStringContent;
- (id)createAccessibilityString;
- (id)createAttributeStringContentWithoutNewLineCharacter:(BOOL)a0;
- (void)didClickExpandBtn;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
