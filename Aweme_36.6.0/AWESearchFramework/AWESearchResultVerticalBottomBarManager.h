@class AWESearchCachalotVerticalBottomBarConfigModel, AWESearchResultVerticalBottomBarHolder;
@protocol AWESearchResultVerticalContainerInsertCardProtocol;

@interface AWESearchResultVerticalBottomBarManager : NSObject

@property (nonatomic) BOOL isCurrentVCSelected;
@property (retain, nonatomic) AWESearchCachalotVerticalBottomBarConfigModel *model;
@property (retain, nonatomic) AWESearchResultVerticalBottomBarHolder *bottomBarHolder;
@property (nonatomic) long long bottomBarType;
@property (weak, nonatomic) id<AWESearchResultVerticalContainerInsertCardProtocol> insertDelegate;

- (void)removeEntranceViewFromContainer;
- (void)addEntranceViewToContainer:(id)a0 belowView:(id)a1;
- (void)updateEntranceFrameWithContainerWidth:(double)a0 Height:(double)a1;
- (BOOL)entranceViewIsShow;
- (void)showCommentInputPanelWithLogExtra:(id)a0;
- (void)dismissCommentInputPanel;
- (void)updateUIWithExtra:(id)a0 Container:(id)a1 log:(id)a2;
- (id)generateModelFromExtra:(id)a0;
- (id)addTopView;
- (void)moveBottomBarToTopView:(id)a0;
- (void)moveBottomBarToContainer:(id)a0;
- (void)setupBottomViewClikedEnable:(BOOL)a0;
- (void)updatePositionForTopView:(id)a0;
- (void)updatePositionForContainer:(id)a0;
- (BOOL)entranceViewIsShowOnTop;
- (void).cxx_destruct;
- (id)init;

@end
