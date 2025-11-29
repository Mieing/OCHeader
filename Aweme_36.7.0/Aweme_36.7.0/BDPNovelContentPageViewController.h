@class BDPNovelClickMask, UIView, UILabel, BDPNovelContentPageContext, BDPNovelEndingView, BDPNovelBack, NSString, BDPNovelContentView, BDPNovelAttachmentContainer, BDPNovelUnlockMaskView, BDPNovelErrorView, BDPNovelLoadingView;

@interface BDPNovelContentPageViewController : UIViewController <TTTextDrawerDelegate, BDPAppRouteChangeMessage>

@property (retain, nonatomic) BDPNovelContentView *contentView;
@property (retain, nonatomic) BDPNovelLoadingView *loadingView;
@property (retain, nonatomic) BDPNovelErrorView *errorView;
@property (retain, nonatomic) BDPNovelEndingView *endingView;
@property (retain, nonatomic) BDPNovelAttachmentContainer *attachmentContainer;
@property (retain, nonatomic) BDPNovelUnlockMaskView *unlockMask;
@property (retain, nonatomic) BDPNovelUnlockMaskView *freewordUnlockMask;
@property (retain, nonatomic) BDPNovelClickMask *clickMask;
@property (retain, nonatomic) BDPNovelBack *nativeBackBtn;
@property (retain, nonatomic) UIView *pageElementView;
@property (nonatomic) BOOL isPlay;
@property (nonatomic) BOOL playingWhenEnterBack;
@property (nonatomic) double flowADStartPlayTime;
@property (nonatomic) BOOL isFirstPlay;
@property (retain, nonatomic) UILabel *debugLabel;
@property (nonatomic) unsigned long long lifeStatus;
@property (readonly, nonatomic) BDPNovelContentPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)DrawRunDelegate:(id)a0 InRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 Context:(struct CGContext { } *)a2;
- (void)DrawBackgroundDelegate:(id)a0 InRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)FetchThemeColor:(id)a0;
- (void)onAppRouteChangePageDidEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)onAppRouteChangePageWillLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)showTweakInfo;
- (id)contentMeta;
- (void)updateViewDisplayAccordingToState;
- (void)operateAdPlay:(BOOL)a0 switchPage:(BOOL)a1;
- (void)updateBindUI;
- (BOOL)isADOnScreen;
- (void)updateTweakInfo;
- (void)refreshContentView;
- (void)refreshNovelContentView;
- (void)handleHorizontalEnd;
- (void)handleUnlockFreeWordInSamePageIfNeeded;
- (void)bindWithContext:(id)a0;
- (double)verticalPreferredHeight;
- (void)registerObserver;
- (void).cxx_destruct;
- (id)renderConfig;
- (void)viewDidLoad;
- (void)removeObserver;
- (void)handleTap:(id)a0;

@end
