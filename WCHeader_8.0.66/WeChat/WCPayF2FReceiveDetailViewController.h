@class WCPayF2FReceiveDetailSummaryItem, Announce, UISwitch, UIImageView, NSString, NSMutableArray, MMTableView;
@protocol WCPayF2FReceiveDetailViewControllerDelegate;

@interface WCPayF2FReceiveDetailViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCPayNoticeBannerDelegate> {
    double kRecordTableCellHeight;
    double kLeftMargin;
    double kTopMargin;
    double kSpeechSynthesizeViewTopMargin;
    double kSpeechSynthesizeViewLeftMargin;
    double kSpeechSynthesizeViewBottomMargin;
    double kSpeechSynthesizeViewImageLabelMargin;
    double kSpeechSynthesizeViewLabelSwitchMargin;
    double kBottomMargin;
}

@property (weak, nonatomic) id<WCPayF2FReceiveDetailViewControllerDelegate> delegate;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) Announce *m_announcement;
@property (retain, nonatomic) WCPayF2FReceiveDetailSummaryItem *curSummaryItem;
@property (retain, nonatomic) NSMutableArray *recordList;
@property (nonatomic) BOOL bIsLoadingMore;
@property (nonatomic) BOOL bIsRecordLoadEnd;
@property (retain, nonatomic) UISwitch *openSwitch;
@property (retain, nonatomic) UIImageView *switchImageView;
@property (nonatomic) BOOL bIsSpeechSwitchViewShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)setSpeechSwitchViewShow:(BOOL)a0;
- (void)setupData;
- (void)refreshControllerWithAnnounce:(id)a0;
- (void)refreshControllerWithRecordSummaryItem:(id)a0 recordListData:(id)a1;
- (void)refreshControllerWithLoadRecordFail;
- (void)refreshControllerAfterDeleteRecordWithSummaryItem:(id)a0 bIsDeleteSuccess:(BOOL)a1;
- (void)viewControllerBack;
- (void)rightBarButtonPress;
- (void)setupNavigationBar;
- (void)setupContentView;
- (void)setupHeaderAndContentView;
- (id)makeEmptyTipsView;
- (id)makeSpeechSynthsizeSwtichView;
- (void)updateSwitchStatus;
- (void)areaButtonClick:(id)a0;
- (id)makeReceiveDetailHeaderView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)makeRecordCellContentView:(id)a0 recordData:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)genTableFooterView;
- (BOOL)isSummaryItemNeedUpdate:(id)a0;
- (id)getBannerView;
- (void)banner:(id)a0 clickWithUrl:(id)a1;
- (void)showSetPushSoundResultSuccess:(BOOL)a0 soundStatus:(BOOL)a1;
- (void)showOpenSystemPushSoundTips;
- (void).cxx_destruct;

@end
