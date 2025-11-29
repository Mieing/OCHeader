@class UIView, NSString, UIImage, HTSLiveToolbarItem, IESLiveRelatedLiveBaseBtn, NSMutableArray, IESLiveRelatedLiveEntryItem, IESLiveRelatedLiveTabsEntryView;
@protocol IESLiveRoomService, IESLiveRelatedLivePortraitEntryViewProtocol;

@interface IESLiveRelatedLiveEntryManager : NSObject <HTSLiveStreamPlayerAction, IESLivePayCardAction, IESLiveToolbarComponentHandler, IESLiveRelatedEntryManagerRouter, IESLiveRevenueInteractAction, IESLiveGameInteractStickerActions>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSMutableArray *entryItemArray;
@property (retain, nonatomic) UIView<IESLiveRelatedLivePortraitEntryViewProtocol> *portraitEntryView;
@property (retain, nonatomic) IESLiveRelatedLiveTabsEntryView *portraitTabView;
@property (retain, nonatomic) IESLiveRelatedLiveBaseBtn *landscapeEntryView;
@property (nonatomic) BOOL isShowPayCard;
@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (retain, nonatomic) UIImage *themeImage;
@property (nonatomic) BOOL updateEntryInStreamChange;
@property (nonatomic) unsigned long long currentEntryState;
@property (retain, nonatomic) IESLiveRelatedLiveEntryItem *currentEntryItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideComponent;
- (void)showComponent;
- (void)didSetAttachingDIContext;
- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)showEntryView;
- (void)toolbarComponentThemeRefresh:(id)a0;
- (void)playerFrameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onCameraWillChangeTo:(id)a0 source:(long long)a1;
- (void)onCameraDidChangeTo:(id)a0 source:(long long)a1;
- (void)onRoomStyleDidChange:(BOOL)a0 callTrace:(id)a1;
- (void)postHasSubCamera:(id)a0 stage:(long long)a1;
- (void)playerWillPlayInSmallWindow;
- (void)playerDidEndplayInSmallWindow;
- (void)updateRoom:(id)a0;
- (void)stickerViewDidShow:(BOOL)a0;
- (void)payCardShowStatusChange:(BOOL)a0;
- (BOOL)needChangeCameraEntryInStreamPlayer;
- (void)updateEntryVisible;
- (void)trackerVSSubCameraPullStreamFirstFrame:(id)a0;
- (void)hideAllEntryView;
- (void)removeAllEntryView;
- (void)updateEntryTitleIfNeed;
- (unsigned long long)checkEntryState;
- (void)showPortraitEntryView;
- (void)showPortraitTabsEntryView;
- (void)showLandscapeEntryView;
- (void)showToolbarEntryView;
- (void)updatePortraitEntryViewConstraints;
- (void)updatePortraitTabsEntryViewConstraints;
- (void)landscapeEntryViewDidClick;
- (BOOL)p_ugcShouldShowEntryViewOnToolBar;
- (void)p_handlePadRotaionChange;
- (void)addEntryItem:(id)a0;
- (void)removeEntryItem:(id)a0;
- (BOOL)containEntryItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
