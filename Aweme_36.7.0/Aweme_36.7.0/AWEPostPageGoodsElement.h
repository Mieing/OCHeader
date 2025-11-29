@class NSString, NSDictionary, AWENewPublishGoodsTableCell;

@interface AWEPostPageGoodsElement : AWEPostPageAnchorCheckCellElement <AWECommerceAnchorMessageProtocol, AWEPostPageAnchorProtocol>

@property (retain, nonatomic) AWENewPublishGoodsTableCell *goodsTableViewCell;
@property (nonatomic) BOOL hasShoppingCartPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (id)starAtlas;
- (id)poiService;
- (void)elementAppear;
- (id)commerceOpenShareHelper;
- (void)didSelectAnchorWithType:(long long)a0 anchorDismissBlock:(id /* block */)a1 enterFromType:(long long)a2;
- (void)setupUIForAnchor;
- (void)setupCell:(id)a0;
- (void)configPlaceholderUI;
- (void)refreshWithAnchorVM:(id)a0;
- (BOOL)canHandleAnchorType:(long long)a0;
- (BOOL)hasGoodsSticker;
- (void)refreshAnchorGoodsWith:(id)a0;
- (void)goodsStickerConflictCheck;
- (void)cleanGoodsCache;
- (BOOL)checkIsEcomAnchorByAnchorType:(long long)a0;
- (void)handleEcomAnchorCheckSignalWithViewModel:(id)a0 state:(id)a1 checkResult:(id)a2;
- (void)showReminderIfNeeded;
- (void)removeReminder;
- (void)p_goodsCellClickedWithAnchorType:(long long)a0;
- (void)p_asyncGoodsEditInfoNotification:(id)a0;
- (void)updateShoppingCartAnchor:(id)a0;
- (void)toastIfNeededForDraftID:(id)a0;
- (void)trackPublishGoodsAnchorClicked;
- (void)trackGoodsAnchorClickedHasJump:(BOOL)a0 notJumpReason:(id)a1;
- (id)getCommerceAnchorPublishModelByType:(long long)a0;
- (void)handleMarkAnchorSelected;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewWillAppear:(BOOL)a0;
- (void)cleanUp;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setViewModel:(id)a0;
- (id)cell;
- (void)didSelect;
- (void)addObservers;

@end
