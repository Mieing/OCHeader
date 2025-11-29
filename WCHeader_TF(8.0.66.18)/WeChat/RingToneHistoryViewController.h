@class RingToneRecommendReporter_23604, UILabel, WCTimeLineFooterView, NSString, RingToneMixPlayer, RingToneHistoryModel, MMTableView, RingBackAddToTingSheetView;

@interface RingToneHistoryViewController : MMUIViewController <MMRefreshTableFooterDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, RingToneHistoryViewCellDelegate, IVOIPWindowExt, WCActionSheetDelegate, RingBackAddToTingSheetViewDelegate> {
    BOOL _isFetchingData;
}

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) RingToneHistoryModel *model;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (nonatomic) unsigned long long dataStatus;
@property (retain, nonatomic) RingToneRecommendReporter_23604 *reporter;
@property (retain, nonatomic) UILabel *clearLabel;
@property (retain, nonatomic) RingBackAddToTingSheetView *sheetView;
@property (nonatomic) unsigned long long cliMinSeq;
@property (nonatomic) unsigned long long totalScanRingBackCount;
@property (nonatomic) unsigned long long totalSendRingBackCount;
@property (nonatomic) unsigned long long setType;
@property (weak, nonatomic) RingToneMixPlayer *player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)report25858Data:(unsigned long long)a0 feedID:(id)a1 type:(unsigned long long)a2;

- (id)init;
- (void)initReporter;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)layoutSubviews;
- (void)viewDidLoad;
- (void)onClickMore:(id)a0;
- (void)fetchNextPage:(BOOL)a0;
- (void)openTingPageSheetView;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)onClearBarItemClick;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)jumpToAuthorPage:(id)a0;
- (void)onExclusiveRingPlay:(id)a0 isToPlay:(BOOL)a1;
- (void)jumpToPlayerPage:(id)a0 index:(long long)a1;
- (void)stopAllPlay;
- (void)onVoipWindowDidAppear;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (unsigned long long)getDataStatus;
- (void)reportClickAddBtn;
- (void)reportRingsSyncToTing:(unsigned long long)a0;
- (void)showTingTips;
- (void)syncRingsToTingAlbumByNet:(id)a0 categoryID:(id)a1;
- (void).cxx_destruct;

@end
