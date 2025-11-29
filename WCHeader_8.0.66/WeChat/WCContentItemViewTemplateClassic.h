@class WCImageView, NSString, UIImageView, WCTimeLineCellMusicPlayerView, UILabel, MMMusicPlayerContoller, MMUIWindow;

@interface WCContentItemViewTemplateClassic : WCContentItemBaseView <MMWebViewDelegate, WCImageViewDelegate, RichTextLayoutDelegate, UIGestureRecognizerDelegate, MMMusicPlayerContollerDelegate, WCNetworkMediaPlayerDelegate, WCForceTouchPreviewProtocol> {
    UILabel *_titleLabel;
    UILabel *_descLabel;
    WCImageView *_coverImage;
    MMMusicPlayerContoller *_playButton;
    UIImageView *_defaultImageView;
    BOOL _forbidJumpUrl;
    MMUIWindow *m_fullScreenWindow;
    int _currentPage;
}

@property (nonatomic) BOOL closeAdLongVideoForViewDetail;
@property (retain, nonatomic) WCTimeLineCellMusicPlayerView *musicView;
@property (nonatomic) BOOL cardStyleOptimization;
@property (nonatomic) BOOL bSceneFromSearch;
@property (nonatomic) double targetMargin;
@property (nonatomic) double targetWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMusicMVType:(id)a0;
+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1;
+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1 appID:(id)a2;

- (void)setPlayButtonHidden:(BOOL)a0;
- (void)layoutSubviews;
- (void)initViewsWithWCDataItem:(id)a0;
- (void)onFavoriteAdd:(id)a0;
- (void)addFavorite;
- (void)onShareToOpenSDK:(id)a0;
- (void)onLongTouch;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)throwUrlMessage;
- (void)jumpToViewStreamVideo;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayer;
- (void)jumpToDetail:(id)a0;
- (void)onClosePlayerForViewDetail:(id)a0;
- (void)onClickFavVideoMenu;
- (void)onShareVideoToFriend:(id)a0;
- (void)onShareVideoToTimeline:(BOOL)a0;
- (void)onClickToPlayMusic:(id)a0 playState:(long long)a1 clickedOnBtn:(BOOL)a2;
- (void)onClickWCImage:(id)a0;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)setNonInteractive;
- (void)dealloc;
- (BOOL)canPeek;
- (id)viewControllerToPreviewWithFromController:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewingSourceRectForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateView:(id)a1;
- (void).cxx_destruct;

@end
