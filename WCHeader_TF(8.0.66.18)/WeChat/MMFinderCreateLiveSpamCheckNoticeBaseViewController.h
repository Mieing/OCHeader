@class MMUILabel, NSString, MMFinderCreateLiveSpamCheckReportSession, UIScrollView, MMUIMaskContainerView;

@interface MMFinderCreateLiveSpamCheckNoticeBaseViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) NSString *detailTitle;
@property (retain, nonatomic) NSString *detailContent;
@property (retain, nonatomic) NSString *leftBtnTitle;
@property (retain, nonatomic) NSString *rightBtnTitle;
@property (nonatomic) BOOL hideNav;
@property (copy, nonatomic) id /* block */ leftBtnBlock;
@property (copy, nonatomic) id /* block */ rightBtnBlock;
@property (retain, nonatomic) MMFinderCreateLiveSpamCheckReportSession *reportSession;
@property (retain, nonatomic) MMUIMaskContainerView *scrollContainerView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *contentLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDetailTitle:(id)a0 detailContent:(id)a1 leftBtnTitle:(id)a2 rightBtnTitle:(id)a3 hideNav:(BOOL)a4 leftBtnBlock:(id /* block */)a5 rightBtnBlock:(id /* block */)a6;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (id)customContentFont;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)colorForPageSheetCancelButtonTitle;
- (long long)styleForPageSheetCancelButton;
- (id)colorForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void).cxx_destruct;

@end
