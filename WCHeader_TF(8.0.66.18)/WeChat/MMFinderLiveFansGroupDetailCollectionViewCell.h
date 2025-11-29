@class UITableViewCell, NSString, NSArray, MMFinderLiveFansGroupInfo, MMLiveTabsBarView, NSMutableArray, UITableView, MMFinderLiveFansGroupIntimacyInfo, UIScrollView;
@protocol MMFinderLiveFansGroupDetailCollectionViewCellDelegate;

@interface MMFinderLiveFansGroupDetailCollectionViewCell : UICollectionViewCell <UITableViewDelegate, UITableViewDataSource, MMLiveTabsBarViewDelegate, MMTableViewDelegate>

@property (weak, nonatomic) UIScrollView *linkedScrollView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSArray *tableViews;
@property (retain, nonatomic) UITableView *upgradeTableView;
@property (retain, nonatomic) UITableView *rightsTableView;
@property (retain, nonatomic) NSArray *upgradeInfos;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutRect;
@property (nonatomic) struct CGPoint { double x; double y; } tableViewInitialOffset;
@property (nonatomic) struct CGPoint { double x; double y; } tableViewPanLastTranslation;
@property (nonatomic) long long currentPage;
@property (nonatomic) BOOL tableViewsAlreadyReset;
@property (retain, nonatomic) MMLiveTabsBarView *tabsView;
@property (retain, nonatomic) NSArray *rightInfos;
@property (retain, nonatomic) MMFinderLiveFansGroupIntimacyInfo *fansIntimacyInfo;
@property (retain, nonatomic) MMFinderLiveFansGroupInfo *fansGroupInfo;
@property (retain, nonatomic) NSMutableArray *rightsTableInfoSectionCellClasses;
@property (nonatomic) BOOL hasReportRightsExposed;
@property (nonatomic) BOOL hasReportNoticeExposed;
@property (nonatomic) BOOL hasReportImageClicked;
@property (weak, nonatomic) UITableViewCell *fansNoticeCell;
@property (weak, nonatomic) id<MMFinderLiveFansGroupDetailCollectionViewCellDelegate> cellDelegate;
@property (nonatomic) BOOL shouldAdaptToDarkLight;
@property (nonatomic) BOOL needAutoSwitchToRightsTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseId;

- (void)layoutSubviews;
- (void)initUI;
- (id)buildTableView;
- (void)updateWithUpgradeInfos:(id)a0;
- (void)updateWithFansIntimacyInfo:(id)a0 fansGroupInfo:(id)a1;
- (void)setScrollViewToLink:(id)a0;
- (void)handleTableViewPanGesture:(id)a0;
- (void)resetTableViewsExcept:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tabsBarView:(id)a0 didClickTabAtIndex:(unsigned long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)getSuperfanExclusiveItems;
- (BOOL)isSuperfan;
- (BOOL)shouldShowUnsubsribe;
- (BOOL)shouldShowFanNoticeCell;
- (BOOL)shouldShowAnchorCard;
- (void)prepareFanRightInfosForDisplay;
- (void)autoSwitchToRightsTabIfNeeded;
- (BOOL)mmTableView:(id)a0 shouldBeginRecognizeGesture:(id)a1;
- (void)reportRightsTabExposed;
- (void)reportNoticeCellExposed;
- (void)reportNoticeImageClick;
- (void).cxx_destruct;

@end
