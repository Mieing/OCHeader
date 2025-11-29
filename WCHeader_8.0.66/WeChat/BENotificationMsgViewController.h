@class NSString, TemplateMsgSearchHelper;

@interface BENotificationMsgViewController : BaseMsgContentViewController <TemplateMsgSearchHelperDelegate>

@property (retain, nonatomic) TemplateMsgSearchHelper *searchHelper;
@property (nonatomic) BOOL isViewDidAppear;
@property (nonatomic) unsigned int lastAutoPlayLocalID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)shouldInteractivePop;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillPop:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)onTableEndScroll;
- (void)makeNotifyMsgExpose;
- (void)msgSearchBarActive;
- (void)msgSearchBarCancel;
- (void)msgSearchDidDismiss;
- (void)msgSearchBarDoSearch;
- (id)getChatContact;
- (void)didSelectSearchResultForMessageWrap:(id)a0 indexPath:(id)a1 arrKeyword:(id)a2;
- (void)updateTitleView:(id)a0 ignoreAnimation:(BOOL)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)autoplayVideoProcess;
- (void)throttleScrollProcess;
- (void)autoPauseLatestAutoplayVideo;
- (void).cxx_destruct;

@end
