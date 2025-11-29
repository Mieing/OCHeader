@class NSMutableArray, FavoritesItem;
@protocol WeNoteAddFavListViewControllerDelegate;

@interface WeNoteAddFavListViewController : FavBaseListViewController <PBMessageObserverDelegate> {
    FavoritesItem *m_curNoteItem;
    NSMutableArray *m_getA8KeyReqArr;
}

@property (weak, nonatomic) id<WeNoteAddFavListViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFlutterNote;

- (id)initWithNoteItem:(id)a0 maxSelectedCount:(unsigned int)a1;
- (void)initBottomPinTopButton;
- (void)viewWillAppear:(BOOL)a0;
- (void)initNavigationBar;
- (void)initEmptySearchLabel;
- (void)initFastBrowserView;
- (void)addItemList:(id)a0 withAutoScrollToAddPositon:(BOOL)a1;
- (void)OnSearch:(id)a0 taskKey:(id)a1;
- (void)OnCancel;
- (void)confirmAttachmentSeperationInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 with:(id)a1;
- (void)addSeletedDataItemToNote;
- (void)checkVideoItem:(id)a0;
- (void)onDone;
- (id)convertDataWrapToNoteData:(id)a0;
- (id)convertDataWrapToAttributeNode:(id)a0;
- (void)updateAddBtn;
- (void)onSelectRowAtIndexPath:(id)a0;
- (void)canNotSelecteDueToExceedCount;
- (void)onClickDetailBtnWith:(id)a0;
- (void)onSquareImgClicked:(id)a0 withInfo:(id)a1 withOffset:(unsigned int)a2;
- (BOOL)favBrowseView:(id)a0 willChangeCheckMarkTo:(BOOL)a1 withMsgInfo:(id)a2;
- (void)favBrowseView:(id)a0 didChangeCheckMarkTo:(BOOL)a1 withMsgInfo:(id)a2;
- (id)messageWrapsForFavBrowseView:(id)a0;
- (void)onSelectDone;
- (id)getA8KeyRequestWith:(id)a0 index:(unsigned int)a1;
- (void)sendGetA8KeyReq;
- (void)handleGetA8KeyResp:(id)a0 EventID:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
