@class AWENewPublishTableCell, NSDictionary, NSString, AWEPostPageVideoCutShareIdInfo, AWEPostPageVideoCutAnchorProductLogic;

@interface AWEPostPageVideoCutStandardAnchorElement : AWEPostPageCellElement <AWECommerceAnchorMessageProtocol, AWEPostPageAnchorProtocol>

@property (retain, nonatomic) AWEPostPageVideoCutAnchorProductLogic *productLogic;
@property (retain, nonatomic) AWENewPublishTableCell *anchorCell;
@property (retain, nonatomic) NSDictionary *originalSourceInfo;
@property (nonatomic) BOOL anchorDisabled;
@property (retain, nonatomic) AWEPostPageVideoCutShareIdInfo *requestedShareIdInfo;
@property (nonatomic) BOOL shareIdInfoUpdated;
@property (nonatomic) BOOL shouldLimitReplaceForSDK;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)elementAppear;
- (void)didSelectExternalAnchorWithType:(long long)a0 anchorDismissBlock:(id /* block */)a1 enterFromType:(long long)a2;
- (void)refreshWithAnchorVM:(id)a0;
- (BOOL)forceReceiveEvents;
- (BOOL)isPassiveAnchorEnabled;
- (long long)currentAnchorBusinessType;
- (id)commonAnchorTrackParams;
- (BOOL)elementEnabled;
- (void)refreshAllAnchorStatusWithReset:(BOOL)a0;
- (BOOL)refreshProductLogic:(BOOL)a0;
- (void)onAnchorCheckFinishedWithResult:(id)a0 anchorVM:(id)a1;
- (void)onAnchorRevertSignal;
- (void)tryFetchShareId;
- (void)onAnchorRemoveClicked;
- (id)currentAnchorTitle;
- (id)currentAnchorId;
- (void)handleAnchorRemoved:(BOOL)a0;
- (void)trackAnchorRemoved:(BOOL)a0;
- (void)resetProductLogicIfNeeded:(BOOL)a0;
- (void)updateSourceInfo;
- (BOOL)checkShouldDisableAnchorWithReason:(unsigned long long *)a0;
- (id)currentGraphicsAnchorType;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewDidLoad;
- (id)cellClass;
- (id)cell;
- (id)cellIdentifier;

@end
