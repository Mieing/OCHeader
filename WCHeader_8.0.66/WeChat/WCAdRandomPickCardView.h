@class WCAdRandomPickCardInfo, WCDataItem, PAGView, NSString, WCAdRandomPickCardDescriptionView, WCAdRandomPickCardItemsView;
@protocol WCAdRandomPickCardViewDelegate;

@interface WCAdRandomPickCardView : MMUIView <WCAdRandomPickCardItemsViewDelegate, WCAdRandomPickCardDescriptionViewDelegate, WCCanvasPageViewControllerExt>

@property (retain, nonatomic) WCAdRandomPickCardInfo *randomPickCardInfo;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long contentItemScene;
@property (retain, nonatomic) WCAdRandomPickCardDescriptionView *descriptionView;
@property (retain, nonatomic) WCAdRandomPickCardItemsView *cardItemsView;
@property (nonatomic) BOOL isRandomPickCardViewActive;
@property (nonatomic) BOOL shouldResumeCardItemsView;
@property (retain, nonatomic) PAGView *backgroundPagView;
@property (nonatomic) BOOL shouldResumeBackgroundPagPlaying;
@property (nonatomic) unsigned long long lastClickedIndex;
@property (weak, nonatomic) id<WCAdRandomPickCardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcViewSizeForPickCardInfo:(id)a0 maxWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 randomPickCardInfo:(id)a1 dataItem:(id)a2 scene:(unsigned long long)a3;
- (void)dealloc;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)generateSubviews;
- (void)layoutSubviews;
- (void)resetCardItemsView;
- (void)makeCardItemsViewPrepare;
- (void)showIntroduceAnimation;
- (void)showRandomAnimation;
- (void)showAllPickedAnimation;
- (id)pageId;
- (double)fetchContentMaxWidth;
- (void)playBackgroundPagForStatus:(long long)a0;
- (void)updateDataItem:(id)a0;
- (void)setCardItemsHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setAllItemsHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setItemHidden:(BOOL)a0 animated:(BOOL)a1 atIndex:(unsigned long long)a2;
- (void)setRandomPickCardViewActive:(BOOL)a0;
- (void)setBackgroundPagViewActive:(BOOL)a0;
- (void)setCardItemsViewActive:(BOOL)a0;
- (id)pickCardLogic;
- (id)onRandomPickCardItemsFetchCanvasPageId;
- (id)onRandomPickCardItemsFetchPickCardLogic;
- (void)onRandomPickCardItemsItemViewDidClick:(id)a0 index:(unsigned long long)a1;
- (void)onRandomPickCardItemsUpdateContainerViewStatus:(long long)a0;
- (void)onRandomPickCardItemsPlayBackgroundAnimationWithStatus:(long long)a0;
- (id)onRandomPickCardDescriptionFetchCanvasPageId;
- (id)onRandomPickCardDescriptionFetchPickCardLogic;
- (void)onCanvasViewDidBePopedWithPageId:(id)a0;
- (void).cxx_destruct;

@end
