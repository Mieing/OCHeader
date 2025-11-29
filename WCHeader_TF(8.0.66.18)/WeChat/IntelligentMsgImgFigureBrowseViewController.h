@class IntelligentFaceClusterMessageItem, NSString, IntelligentMessageReport, MMUIView, IntelligentMsgImgFigureHeaderView, NSMutableArray, IntelligentMsgImgFullScreenMsgImgClickLogic, MMTableView, IntelligentMsgBrowseResultTableViewLogic;
@protocol IntelligentMsgImgFigureBrowseViewControllerController;

@interface IntelligentMsgImgFigureBrowseViewController : MMUIViewController <MsgImgFullScreenWindowDelegate, MsgImgFullScreenViewControllerDelegate, IntelligentMsgBrowseViewDelegate, ViewAppMsgControllerDelegate, IFTSIntelligentMessageMgrExt, IntelligentMsgBrowseResultTableViewLogicDelegate, UITableViewDataSource, UITableViewDelegate, IntelligentMsgImgFullScreenMsgImgClickLogicDelegate, IMsgExt> {
    NSMutableArray *m_arrSearchResultMessageLocalId;
    NSMutableArray *m_arrResultMessagr;
    IntelligentMsgImgFullScreenMsgImgClickLogic *m_msgImgFullScreenMsgImgClickLogic;
    IntelligentMsgBrowseResultTableViewLogic *m_resultTableViewLogic;
    IntelligentMsgImgFigureHeaderView *m_figureHeaderView;
    unsigned int m_indexStartCursor;
}

@property (retain, nonatomic) MMTableView *m_tableView;
@property (retain, nonatomic) MMUIView *m_tableViewHeaderView;
@property (retain, nonatomic) NSMutableArray *m_arrIntelligentMsgItem;
@property (weak, nonatomic) id<IntelligentMsgImgFigureBrowseViewControllerController> m_delegate;
@property (retain, nonatomic) IntelligentFaceClusterMessageItem *m_faceClusterMessageItem;
@property (retain, nonatomic) NSString *m_searchText;
@property (nonatomic) unsigned int m_searchType;
@property (retain, nonatomic) NSString *m_nsChatName;
@property (nonatomic) unsigned int m_categoryDisplayType;
@property (retain, nonatomic) IntelligentMessageReport *m_reportInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (void)initData;
- (id)getFaceClusterItemLabelIdStr;
- (void)initNavBar;
- (void)initView;
- (void)initTableHeaderView;
- (void)initTableView;
- (id)getResultTableViewLogic;
- (void)updateFigureBrowseViewWithImage:(id)a0 figureCount:(unsigned int)a1;
- (void)filterIntelligentMsgData;
- (void)doFTSResult;
- (void)analyzeMsgSearchResult;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewDidTransitionToNewSize;
- (void)onCancel;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)onSquareImgClicked:(id)a0 withInfo:(id)a1 withOffset:(unsigned int)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMediaFrameWithMsgWrap:(id)a0;
- (id)getMsgImgFullScreenMsgInView;
- (void)onIntelligentMsgBrowseResultTableViewGetMoreMsgWithNext:(BOOL)a0;
- (void).cxx_destruct;

@end
