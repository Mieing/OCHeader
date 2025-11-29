@class AWEPlaylistDetailOwerInfoView, UIView, UIImageView, NSString, UILabel, AWECollectionButton, BDImageView;
@protocol AWEFoldingLabel;

@interface AWEPlaylistAnchorDetailHeaderView : UIView <AWEFoldingLabelDelegate>

@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *starCountLabel;
@property (retain, nonatomic) AWECollectionButton *starButton;
@property (retain, nonatomic) AWEPlaylistDetailOwerInfoView *ownerInfoView;
@property (retain, nonatomic) UIView<AWEFoldingLabel> *descLabel;
@property (nonatomic) double descFoldedHeight;
@property (retain, nonatomic) UIView *createEntryContainerView;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) UILabel *entryTitleLabel;
@property (retain, nonatomic) UIImageView *entryArrowImageView;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *owerName;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) unsigned long long starCount;
@property (nonatomic) BOOL isStarred;
@property (nonatomic) BOOL collectBtnHidden;
@property (nonatomic) BOOL collectBtnEnable;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL canShowDesc;
@property (nonatomic) BOOL canShowCreateEntry;
@property (copy, nonatomic) id /* block */ tapOwnerInfoBlock;
@property (copy, nonatomic) id /* block */ tapStarBlock;
@property (copy, nonatomic) id /* block */ tapGoLunaCollect;
@property (copy, nonatomic) id /* block */ tapCreatePlaylistEntry;
@property (copy, nonatomic) id /* block */ headerViewHeightDidUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)coverWidth;
- (void)p_setup;
- (void)labelDidUnfold:(id)a0;
- (void)labelDidFold:(id)a0;
- (void)updateCollectButtonAccessibility;
- (void)updateCollectButtonEnable:(BOOL)a0;
- (void)updateStarCount:(id)a0;
- (void)updateUIWithCreatePlaylistBannerHidden:(BOOL)a0;
- (double)heightWithDescription:(id)a0;
- (id)p_uncollectedTitle;
- (void)p_updateStarState;
- (void)p_updateDespLabel;
- (void)p_updateViewsConstraint;
- (void)p_updateColors;
- (id)p_generateFoldingAttributedString;
- (void)p_starTapped;
- (void)ownerInfoTapped;
- (unsigned long long)desNumberOfLinesToFold;
- (void)starTapped;
- (void)p_didClickEntry;
- (id)p_entryTitle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)nameFont;

@end
