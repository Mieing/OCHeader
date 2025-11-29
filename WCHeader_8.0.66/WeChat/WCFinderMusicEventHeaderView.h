@class MMWebImageView, WCFinderVideoTemplateView, UILabel, FinderMusicTopicInfo, WCFinderShadowBubbleView, UIView, WCFinderMusicEventHeaderRecommendListView, RichTextView, WCFinderDataItem, MMUIView, NSString, VideoTemplate, WCFinderExpandHitTingPlayerContoller, WCFinderAuthInfoIconView, WCFinderShareItemInfo, MMUIButton;

@interface WCFinderMusicEventHeaderView : WCFinderMusicBaseHeaderView <WCFinderFeedContentTextClickActionDelegate, RichTextLayoutDelegate, MMMusicPlayerContollerDelegate, WCFinderVideoTemplateViewDelegate, WCFinderMusicEventHeaderRecommendListViewDelegate, ILinkEventExt>

@property (retain, nonatomic) FinderMusicTopicInfo *musicTopicInfo;
@property (retain, nonatomic) MMWebImageView *mediaBkgImage;
@property (retain, nonatomic) RichTextView *songNameTextView;
@property (retain, nonatomic) UILabel *songDescLabel;
@property (retain, nonatomic) RichTextView *listenWholeSongView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) WCFinderExpandHitTingPlayerContoller *tingMusicBtn;
@property (retain, nonatomic) MMUIButton *audioMusicBtn;
@property (retain, nonatomic) UIView *playButtonBGView;
@property (retain, nonatomic) MMUIView *btnContainerView;
@property (retain, nonatomic) MMUIButton *joinButton;
@property (retain, nonatomic) MMUIButton *ringBtn;
@property (retain, nonatomic) MMUIButton *likeBtn;
@property (retain, nonatomic) WCFinderMusicEventHeaderRecommendListView *recommendListView;
@property (retain, nonatomic) WCFinderShadowBubbleView *likeEduBubbleView;
@property (retain, nonatomic) VideoTemplate *videoTemplate;
@property (retain, nonatomic) WCFinderDataItem *fromDataItem;
@property (retain, nonatomic) WCFinderShareItemInfo *shareItemInfo;
@property (nonatomic) BOOL showMusicListenWholeSongViewSwitch;
@property (readonly, nonatomic) WCFinderVideoTemplateView *templateView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithMusicTopicInfo:(id)a0 andViewWidth:(double)a1;
+ (BOOL)canShowAuthorView:(id)a0;
+ (id)buildSongDetailLabel:(double)a0;
+ (id)buildTitleTextView:(double)a0;
+ (id)convertFromFinderMusicInfo:(id)a0;
+ (id)getSongDescByMusicTopicInfo:(id)a0;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pauseMusic;
- (void)updateLayout;
- (id)listenWholeSongText;
- (void)layoutSubviews;
- (void)changeRingBtnShow:(BOOL)a0;
- (void)updateWithMusicTopicInfo:(id)a0 fromDataItem:(id)a1 shareItemInfo:(id)a2;
- (void)showLikeEduBubbleView;
- (void)hiddenLikeEduBubbleView;
- (id)getHeaderTitle;
- (id)getHeaderIconUrl;
- (void)onClickFavAction;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onClickAuthorView;
- (void)joinButtonClicked;
- (void)onClickRingAction;
- (void)onClickLikeAction;
- (void)onClickTemplateViewAction;
- (void)onClickLikeEduBubbleView;
- (void)finderMusicEventHeaderRecommendListViewDidReloadData;
- (void)finderMusicEventHeaderRecommendListViewDidClickTemplateActionButton;
- (void)finderMusicEventHeaderRecommendListViewDidClickRecommendMusicActionButtonWithMusicInfo:(id)a0;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)onClickToPlayMusic:(id)a0 playState:(long long)a1 clickedOnBtn:(BOOL)a2;
- (void)playClicked:(id)a0;
- (void)onClickPlayAudioAction:(id)a0;
- (void).cxx_destruct;

@end
