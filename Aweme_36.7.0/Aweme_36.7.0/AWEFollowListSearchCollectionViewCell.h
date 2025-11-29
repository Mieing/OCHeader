@class UIButton, NSArray;

@interface AWEFollowListSearchCollectionViewCell : AWEFollowListUserBaseCell

@property (retain, nonatomic) UIButton *moreButtonView;
@property (retain, nonatomic) NSArray *avatar168FromThumbnailURLs;
@property (nonatomic) BOOL showMoreButton;

+ (id)defaultImage;

- (void)setShowOnlineDotView:(BOOL)a0;
- (void)__moreButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
