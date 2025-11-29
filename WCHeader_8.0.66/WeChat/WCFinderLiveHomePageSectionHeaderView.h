@class MMLiveColorfulLabel, UIImageView, WCFinderLiveHomePageSectionViewModel, UIView, MMWebImageView, MMUIButton;
@protocol WCFinderLiveHomePageSectionHeaderViewDelegate;

@interface WCFinderLiveHomePageSectionHeaderView : UICollectionViewCell

@property (retain, nonatomic) MMLiveColorfulLabel *titleLabel;
@property (retain, nonatomic) MMWebImageView *iconImage;
@property (retain, nonatomic) UIView *verticalLineView;
@property (retain, nonatomic) WCFinderLiveHomePageSectionViewModel *sectionVM;
@property (retain, nonatomic) MMUIButton *moreButton;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *foldContainer;
@property (retain, nonatomic) UIImageView *foldImage;
@property (weak, nonatomic) id<WCFinderLiveHomePageSectionHeaderViewDelegate> delegate;

+ (double)cellHeight;
+ (id)cellIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithSection:(id)a0;
- (id)calculateSectionDisplayTitle;
- (double)maxTitleLabelWidth;
- (void)setupUI;
- (void)onTap;
- (void)animateUpdate;
- (void)layoutUI;
- (void)updateTextColors:(id)a0;
- (void)onClickMore:(id)a0;
- (BOOL)showMoreButton;
- (BOOL)showFold;
- (void).cxx_destruct;

@end
