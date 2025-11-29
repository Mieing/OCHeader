@class FinderFavListCellContentContainer, NSString, WCFinderHeadImageView, WCFinderThanksButton, UIView, WCFinderFavInfo;
@protocol WCFinderFeedFavListCellDelegate;

@interface WCFinderFeedFavListCollectionViewCell : UICollectionViewCell <WCFinderHeadImageViewDelegate, WCFinderThanksButtonDelegate, WCFinderThanksExt>

@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) FinderFavListCellContentContainer *contentContainer;
@property (retain, nonatomic) WCFinderThanksButton *thanksButton;
@property (retain, nonatomic) WCFinderFavInfo *favInfo;
@property (nonatomic) struct CGSize { double width; double height; } layoutSize;
@property (weak, nonatomic) id<WCFinderFeedFavListCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (void)setupEvent;
- (void)prepareForReuse;
- (void)showHighlightAnimation;
- (void)updateWithFavInfo:(id)a0;
- (BOOL)isSelfFav;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thanksIconFrame;
- (void)finderHeadImageViewDidClick:(id)a0;
- (void)onThanksButtonClickedWithThanksState:(BOOL)a0;
- (void)onThanksButtonEmitMagicAnimationWithAnimStyle:(unsigned long long)a0;
- (void)onThankStateChanged:(BOOL)a0 tid:(id)a1 username:(id)a2 interactionType:(int)a3;
- (void).cxx_destruct;

@end
