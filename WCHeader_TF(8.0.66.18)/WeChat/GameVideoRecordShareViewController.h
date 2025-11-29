@class UIView, NSString, WCPlayerView, NSMutableDictionary, UIButton, WCPlayerConfigControlView, RichTextView, MiniGameVideoFile;

@interface GameVideoRecordShareViewController : MMUIViewController <ILinkEventExt, WCPlayerConfigDelegate> {
    unsigned int _width;
    unsigned int _height;
    MiniGameVideoFile *_videoFile;
    id /* block */ _callback;
    long long _parentOrientation;
    NSMutableDictionary *_resultMap;
    NSMutableDictionary *_itemModels;
    RichTextView *bottomHintLable;
    UIView *buttonBar;
    UIButton *stashButton;
    UIButton *shareButton;
    WCPlayerView *playerView;
    WCPlayerConfigControlView *controlView;
    BOOL _toolViewHidden;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVideo:(id)a0 withWidth:(unsigned int)a1 withHeight:(unsigned int)a2 withParentOrientation:(long long)a3 withAppName:(id)a4 withAppId:(id)a5 withExtConfigJson:(id)a6 withShareOptions:(id)a7 withShareTitle:(id)a8 withShareDesc:(id)a9 withAppVersion:(unsigned int)a10 withAppState:(unsigned int)a11 withIsDevEdited:(BOOL)a12 callbck:(id /* block */)a13;
- (void)prepareModels:(id)a0;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)getMappedKV;
- (id)buildStashItem;
- (id)buildShareToGameCenterItem;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)goToWebViewWithUrl:(id)a0;
- (id)buildShareToFriendItem;
- (id)buildShareToSnsItem;
- (void)layoutBottomHintLableWithText:(id)a0;
- (void)layout;
- (void)reportWithAreaId:(int)a0 withPositionId:(long long)a1 withActionId:(int)a2 withOpType:(int)a3 withExtInfo:(id)a4 withFuncType:(unsigned int)a5;
- (void)onSightIconProgressEnd;
- (void)onTapSightIconView;
- (void)onTapCloseButton:(id)a0;
- (void)onTapAttachButton:(id)a0;
- (void)onVideoPlay;
- (void)onToolViewAutoClose;
- (void)onVideoPause;
- (void)onPlayToEnd;
- (void)onLoopPlayToEnd;
- (void)onGetVideoSize:(struct CGSize { double x0; double x1; })a0;
- (void)onShowBufferingView;
- (void)onHiddenBufferingView;
- (void)setToolViewHidden:(BOOL)a0;
- (BOOL)isLandscape;
- (id)provideVideoArgs;
- (void)reLayoutButtonsWithHasStash:(BOOL)a0 hasShare:(BOOL)a1;
- (void)onClickStash;
- (BOOL)hasStash;
- (BOOL)hasShare;
- (void)onShareResultWithScene:(id)a0 isSuccess:(BOOL)a1 isCancel:(BOOL)a2 errMsg:(id)a3;
- (void)checkShowEducationWithItem:(id)a0 withCallbck:(id /* block */)a1;
- (void)onClickShare;
- (void)didMoveToParentViewController:(id)a0;
- (void)onClose;
- (id)navigationBarBackgroundColor;
- (long long)overrideMMUserInterfaceStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;

@end
