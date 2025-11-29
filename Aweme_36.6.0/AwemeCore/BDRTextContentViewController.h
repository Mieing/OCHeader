@class BDPageControllManager, NSArray, NSString, BDReaderLineContext, BDReaderImageView, BDTextLayoutPageData, BDRTextContentView, NSMutableArray, BDReaderBubbleView;

@interface BDRTextContentViewController : BDRContentViewController <BDRTextContentViewDelegate, BDRTextContentViewDataSource, BDReaderBubbleViewDelegate>

@property (copy, nonatomic) NSArray *insertedViewObjs;
@property (copy, nonatomic) NSArray *contentInsertedViewObjs;
@property (retain, nonatomic) NSMutableArray *attachmentViewObjs;
@property (retain, nonatomic) BDReaderBubbleView *footnoteBubble;
@property (retain, nonatomic) NSArray *allLayoutLines;
@property (retain, nonatomic) BDReaderImageView *backgroundView;
@property (readonly, nonatomic) BDTextLayoutPageData *pageData;
@property (retain, nonatomic) BDRTextContentView *pageView;
@property (retain, nonatomic) BDReaderLineContext *lineContext;
@property (weak, nonatomic) BDPageControllManager *pageControllManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDragEnable;
- (void)contentViewDidScroll:(id)a0;
- (void)contentViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)contentViewWillBeginDragging:(id)a0;
- (void)readerInsertedViewControllerThemeConfigChange:(id)a0;
- (void)onInsertedViewControllerWillAppear;
- (void)onInsertedViewControllerWillDisappear;
- (void)onInsertedViewControllerDidAppear;
- (void)onInsertedViewControllerDidDisappear;
- (void)onInsertedViewControllerRefreshCurrentPage;
- (id)viewsForBrieflyDisablingUserActivity;
- (BOOL)isFocusBottom;
- (BOOL)isFocusTop;
- (void)pageShouldShowBackgroundImage:(id)a0;
- (id)pageView:(id)a0 viewForAttachment:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)pageViewDidClickLineText:(id)a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)pageViewDidClickLink:(id)a0;
- (void)pageViewDidClickFootnote:(id)a0 itemView:(id)a1;
- (id)getAllLayoutLines;
- (void)removeInsertViewObjects;
- (void)configLineContext;
- (void)removeFootnoteBubble;
- (void)handleBgImg:(id)a0;
- (BOOL)containLayoutLineInPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutRectWithLineInfo:(id)a0;
- (void)bubbleViewDidShow:(id)a0;
- (void)bubbleViewDidDismiss:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })layoutSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)setupLayout;

@end
