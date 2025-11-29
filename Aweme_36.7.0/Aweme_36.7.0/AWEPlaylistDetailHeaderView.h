@class UIView, NSString, AWECollectionButton, UIButton, BDImageView, AWEBizUIBubble, DUXPopover, AWEPlaylistDetailOwerInfoView, UILabel;
@protocol AWEFoldingLabel, AWEPlaylistDetailHeaderViewDelegate;

@interface AWEPlaylistDetailHeaderView : UIView <AWEFoldingLabelDelegate>

@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView<AWEFoldingLabel> *desLabel;
@property (retain, nonatomic) AWEPlaylistDetailOwerInfoView *owerInfoView;
@property (retain, nonatomic) AWECollectionButton *starButton;
@property (retain, nonatomic) UIButton *publishButton;
@property (retain, nonatomic) UIButton *addSongsButton;
@property (retain, nonatomic) UILabel *starCountLabel;
@property (retain, nonatomic) AWEBizUIBubble *publishBubble;
@property (retain, nonatomic) DUXPopover *publishPopover;
@property (nonatomic) BOOL publishBubbleShowing;
@property (nonatomic) BOOL enableCollect;
@property (nonatomic) BOOL canShowCollect;
@property (nonatomic) BOOL canShowPublishButton;
@property (nonatomic) BOOL canJumpWithOwnerName;
@property (nonatomic) BOOL canShowAddSongButton;
@property (nonatomic) BOOL needHideStarCountLabel;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *placeHolderCoverName;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *owerName;
@property (nonatomic) BOOL isStarred;
@property (nonatomic) BOOL isTitleModified;
@property (nonatomic) unsigned long long starCount;
@property (copy, nonatomic) id /* block */ tapStarBlock;
@property (copy, nonatomic) id /* block */ tapOwnerInfoBlock;
@property (copy, nonatomic) id /* block */ detailInfoBlock;
@property (copy, nonatomic) id /* block */ tapAddSongsBlock;
@property (copy, nonatomic) id /* block */ headerHeightDidChange;
@property (copy, nonatomic) id /* block */ tapPublishBlock;
@property (weak, nonatomic) id<AWEPlaylistDetailHeaderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })coverSize;
+ (double)viewHeight;

- (void)awe_themeDidChange:(long long)a0;
- (void)p_setup;
- (void)labelDidUnfold:(id)a0;
- (void)labelDidFold:(id)a0;
- (void)updateCollectButtonAccessibility;
- (void)updateStarCount:(id)a0;
- (void)p_updateStarState;
- (void)p_updateDespLabel;
- (void)p_updateColors;
- (id)p_generateFoldingAttributedString;
- (void)p_starTapped;
- (void)starTapped;
- (void)updatePublishButtonGrayOut:(BOOL)a0;
- (void)showPublishGuideBubble;
- (void)p_addDetailInfoGestureOnView:(id)a0 withTag:(long long)a1;
- (void)detailInfoTapped:(id)a0;
- (void)owerInfoTapped;
- (void)p_updateUIConstraint;
- (void)p_showPublishGuideBubble;
- (id)_publishBubbleHasShowenKey;
- (void)publishButtonTapped;
- (void)addSongsButtonTapped;
- (id)musicBundle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;

@end
