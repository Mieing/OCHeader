@class UIView, NSString, MMWebImageView, MMUIWindow, WCNewYearHBDetailDataForSns, WCMediaItem, MMTableView, UILabel;

@interface WCNewYearHBDetailViewControllerForSns : MMUIViewController <WCFacadeExt, UITableViewDelegate, UITableViewDataSource> {
    WCMediaItem *_mediaItem;
    MMUIWindow *_fullScreenWindow;
    UIView *_bgView;
    UIView *_coverFrameView;
    MMWebImageView *_coverImgView;
    double _curProgress;
    UILabel *_moneyLabel;
    UILabel *_tipsLabel;
    MMTableView *m_tableView;
    UIView *m_oHeaderView;
    WCNewYearHBDetailDataForSns *_detailData;
    UILabel *_rmbUnitLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initNavBar;
- (void)onClose;
- (BOOL)useTransparentNavibar;
- (void)initTableView;
- (void)setBorder:(id)a0;
- (id)GetHeaderView:(id)a0;
- (BOOL)shouldAutorotate;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)setupSubviews;
- (void)updateWithDetailData:(id)a0;
- (void)onCancelDownloadSuccess:(id)a0 downloadType:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)makeCell:(id)a0 cell:(id)a1 row:(unsigned long long)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
