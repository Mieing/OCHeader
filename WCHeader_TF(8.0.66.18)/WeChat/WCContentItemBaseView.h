@class UINavigationController, WCMomentsPageContext, WCContentItemViewOptions, WCDataItem, ShareDataToOpenSDKController, NSString;
@protocol WCContentItemBaseViewDelegate;

@interface WCContentItemBaseView : MMUIView <WCForceTouchTriggerLongPressProtocol> {
    long long _touchCount;
    BOOL _bIsLongPressHandled;
    BOOL _bTouchEnds;
    BOOL _bFromDetail;
    struct CGSize { double width; double height; } _fixMediaSize;
}

@property (readonly, nonatomic) WCContentItemViewOptions *options;
@property (readonly, nonatomic) WCMomentsPageContext *pageContext;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) WCDataItem *oDataItem;
@property (nonatomic) BOOL bShowDetail;
@property (nonatomic) BOOL bSnsScene;
@property (nonatomic) unsigned long long contentItemScene;
@property (retain, nonatomic) ShareDataToOpenSDKController *shareDataToOpenSDKController;
@property (weak, nonatomic) id<WCContentItemBaseViewDelegate> itemViewDelegate;
@property (readonly, nonatomic) long long menuTriggerScene;
@property (nonatomic) long long homepageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForMedia:(id)a0;
+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1;
+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1 appID:(id)a2;
+ (double)heightForMedia:(id)a0 pageContext:(id)a1 showDetail:(BOOL)a2;
+ (struct CGSize { double x0; double x1; })getImageSize:(id)a0;

- (id)initWithDataItem:(id)a0 options:(id)a1;
- (id)initWithWCDataItem:(id)a0;
- (id)initWithWCDataItem:(id)a0 showDetail:(BOOL)a1;
- (id)initWithWCDataItem:(id)a0 showDetail:(BOOL)a1 withScene:(unsigned long long)a2;
- (id)initWithWCDataItem:(id)a0 showDetail:(BOOL)a1 withScene:(unsigned long long)a2 fixMediaSize:(struct CGSize { double x0; double x1; })a3;
- (id)initWithWCDataItem:(id)a0 showDetail:(BOOL)a1 snsScene:(BOOL)a2;
- (void)initViewsWithWCDataItem:(id)a0;
- (void)dealloc;
- (id)getTopViewController;
- (id)getMainContentView;
- (BOOL)canBecomeFirstResponder;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (double)fetchVideoCurrentPlaybackTime;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisappear;
- (void)contentItemDidEndDecelerating;
- (void)contentItemInteractedByUser;
- (void)contentItemBecomeInvisible;
- (void)setNonInteractive;
- (void)setFromDetail;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)throwUrlMessage;
- (void)onLongTouch;
- (void)onMore:(id)a0;
- (void)LongPressEvents;
- (void)onMenuItemClickWithActionType:(long long)a0;
- (void)onMenuItemWillShow;
- (void)onVoiceOverTogglePlay;
- (BOOL)hasPlayButton;
- (BOOL)isPlaying;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateView:(id)a1;
- (void)addFavorite;
- (void)shareToOpenSDK;
- (BOOL)canShareToOpenSDK;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)isMenuItemsVisiable;
- (void)onMenuControllerWillHide:(id)a0;
- (void).cxx_destruct;

@end
