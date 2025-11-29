@class UIView, MMWebImageView, MMUIButton, WCFinderFeedContentVM, NSString, UIImageView, WCFinderExpandHitTingPlayerContoller, UILabel, WCFinderLinearView;
@protocol WCFinderStreamProfileMusicCellDelegate;

@interface WCFinderStreamProfileMusicCell : UICollectionViewCell <MMMusicPlayerContollerDelegate, IFavoritesExt>

@property (retain, nonatomic) UIView *cellAccessibilityView;
@property (retain, nonatomic) UIView *avatarContainer;
@property (retain, nonatomic) UIView *avatarMask;
@property (retain, nonatomic) UIImageView *defaultMusicIcon;
@property (retain, nonatomic) MMWebImageView *musicIconView;
@property (retain, nonatomic) WCFinderExpandHitTingPlayerContoller *playButton;
@property (retain, nonatomic) UIView *playButtonBGView;
@property (retain, nonatomic) MMUIButton *starButton;
@property (retain, nonatomic) WCFinderLinearView *titleCintainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *musicLengthLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (weak, nonatomic) id<WCFinderStreamProfileMusicCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void *)observeImageContextKey;
- (void)updateWithContentVM:(id)a0;
- (id)formatTimeString:(long long)a0;
- (void)doLayout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)thumbImage;
- (void)playClicked:(id)a0;
- (void)onClickToPlayMusic:(id)a0 playState:(long long)a1 clickedOnBtn:(BOOL)a2;
- (void)onClickStarButton;
- (void)OnAddNewFavoritesItems:(id)a0;
- (void)OnDelFavoritesItems:(id)a0;
- (void).cxx_destruct;

@end
