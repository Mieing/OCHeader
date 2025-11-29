@class NSString, AWEIMScrollViewContentOffsetManager;
@protocol AWEIMMessageListDataInterface, AWEIMMessageTableViewInterface;

@interface IESIMScrollViewContentOffsetComponent : AWEIMComponentBase <AWEIMScrollViewContentOffsetManagerDataSource, AWEIMScrollViewContentOffsetManagerDelegate, IESIMScrollViewContentOffsetService, AWEIMMessageTableViewAction, IESIMMessageListMessageMenuAction>

@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListDataService;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMScrollViewContentOffsetManager *tableContentOffsetManager;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentCenter;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)latestMessage;
- (void)tableViewWillBeginDragging:(id)a0;
- (void)tableViewAllDidEndScroll:(id)a0;
- (void)msgList_afterReloadTableViewDataWithScrollView:(id)a0 oldContentSize:(struct CGSize { double x0; double x1; })a1 oldContentOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)tableViewDidScrollToTop:(id)a0;
- (void)tableViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)msgList_tableViewCreated:(id)a0;
- (void)didChangeContentSize:(struct CGSize { double x0; double x1; })a0 newSize:(struct CGSize { double x0; double x1; })a1 scrollView:(id)a2;
- (void)didSetContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1 scrollView:(id)a2;
- (void)didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 newFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scrollView:(id)a2;
- (void)msg_longPressMenuWillDisplayOnMessage:(id)a0;
- (void)msg_longPressMenuDidDismiss;
- (void)scrollAnimationDidEnd;
- (void)contentSizeNotFillScreenBottomInsert;
- (void).cxx_destruct;

@end
