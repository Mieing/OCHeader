@class NSString, NSMutableArray, UIView;
@protocol AWEIMMessageListDataInterface, AWEIMMessageTableViewInterface;

@interface AWEIMMultiSelectMessageComponent : AWEIMComponentBase <AWEIMMultiSelectMessageComponentProtocol, AWEIMMessageTableViewAction, AWEIMMessageListDataAction>

@property (retain, nonatomic) NSMutableArray *selectServerMessageIdList;
@property (nonatomic) BOOL firstFrameOpt;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewInterface;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListDataInterface;
@property (retain, nonatomic) UIView *emptyBackgroundView;
@property (nonatomic) BOOL isMultiSelect;
@property (nonatomic) BOOL disableClearSelectWhenDisappear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidDisappear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)recallMessage:(id)a0 toMessage:(id)a1;
- (void)willDeleteMessage:(id)a0;
- (void)changeToMultiselect:(BOOL)a0;
- (void)changeToMultiSelect:(BOOL)a0 withMessages:(id)a1;
- (void)clearMultiSelectState;
- (id)getSelectServerMessageIDList;
- (void)msgList_afterReloadTableViewDataWithScrollView:(id)a0 oldContentSize:(struct CGSize { double x0; double x1; })a1 oldContentOffset:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)p_shouldShowEmptyBackgroundView;
- (void)p_tapCellWhileEditingWithCell:(id)a0 message:(id)a1;
- (void)p_filterSelectMessage:(id)a0;
- (void)changeToMultiSelect:(BOOL)a0 withSelectServerMessageIdList:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
