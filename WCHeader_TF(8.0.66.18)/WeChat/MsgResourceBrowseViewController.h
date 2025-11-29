@class UILabel, NSString, MsgFastBrowseView, CMessageWrap, UIView, NSMutableArray, UIButton;

@interface MsgResourceBrowseViewController : MMUIViewController <MsgFastBrowseViewDelegate, IChatLogDataMgrExt, WCActionSheetDelegate> {
    NSMutableArray *m_arrMsg;
    struct vector<std::shared_ptr<ChatLogDataItem>, std::allocator<std::shared_ptr<ChatLogDataItem>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<ChatLogDataItem> *, std::allocator<std::shared_ptr<ChatLogDataItem>>> { void *__value_; } __end_cap_; } _arrSelectedData;
    struct shared_ptr<ChatLogSessionItem> { struct ChatLogSessionItem *__ptr_; struct __shared_weak_count *__cntrl_; } m_sessionItem;
    MsgFastBrowseView *m_msgFastBrowseView;
    UIView *_footerView;
    UIButton *_selectAllButton;
    UIButton *_deleteButton;
    UILabel *_sizeLabel;
    unsigned long long m_eType;
    BOOL m_bFilterSession;
}

@property (retain, nonatomic) CMessageWrap *m_curMsgWrap;
@property (retain, nonatomic) NSString *m_nsChatName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PreviewAppNode:(id)a0 msgWrap:(id)a1 inNavigationController:(id)a2 withClickFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (void)PreviewAppNode:(id)a0 msgWrap:(id)a1 inNavigationController:(id)a2 withClickFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 userInfo:(id)a4 animated:(BOOL)a5;
+ (void)PreviewAppNode:(id)a0 msgWrap:(id)a1 inNavigationController:(id)a2 withClickFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 msgLocateForFile:(BOOL)a4;
+ (void)PreviewAppNode:(id)a0 msgWrap:(id)a1 inNavigationController:(id)a2 withClickFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 msgLocateForFile:(BOOL)a4 userInfo:(id)a5 animated:(BOOL)a6;
+ (void)globalClickAppMessage:(id)a0 inNavigationController:(id)a1 withClickFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (void)globalClickAppMessage:(id)a0 inNavigationController:(id)a1 withClickFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 lookDetailMsgRecord:(BOOL)a3;

- (id)initWithMsgWrap:(id)a0 type:(unsigned long long)a1 filter:(BOOL)a2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initData;
- (void)initNavBar;
- (void)initView;
- (void)initFooterPannelView;
- (void)updateFooterPannelView;
- (id)getSelectButtonTitle;
- (unsigned long long)getDataSize:(const void *)a0;
- (id)getDataSizeShowString:(const void *)a0;
- (void)viewDidTransitionToNewSize;
- (void)onCancel;
- (void)hanleClickImageMessage:(id)a0 msgView:(id)a1;
- (void)handleClickVideoMessage:(id)a0;
- (void)handleClickBrandMpVideoMessage:(id)a0;
- (void)handleClickAppMessage:(id)a0 msgView:(id)a1;
- (id)messageWrapsForMsgFastBrowseView:(id)a0;
- (void)onSquareImgClicked:(id)a0 withInfo:(id)a1 withOffset:(unsigned int)a2;
- (void)msgFastBrowseView:(id)a0 didChangeCheckMarkTo:(BOOL)a1 withMsgInfo:(id)a2;
- (void)msgFastBrowseView:(id)a0 didChangeCheckMarkTo:(BOOL)a1 atSection:(unsigned long long)a2;
- (void)onSelecteAll;
- (void)onChatLogDataReloadItem;
- (void)rebuildSelectedData;
- (void)onDeleteSelectedData:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)doDeleteData;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
