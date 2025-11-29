@class POITableView, MMLocationUISearchBar, MMLocationAccuracyAuthorizationTipView, POICorrectionTextView, NSString, PickLocationManager, WCTimeLineFooterView;
@protocol MMPickLocationActionDelegate;

@interface MMPickLocationContentView : UIView <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, POITableViewCellDelegate, POICorrectionTextViewDelegate>

@property (weak, nonatomic) id<MMPickLocationActionDelegate> actionDelegate;
@property (retain, nonatomic) MMLocationUISearchBar *searchBar;
@property (retain, nonatomic) MMLocationAccuracyAuthorizationTipView *accuracyAuthorizationTipView;
@property (retain, nonatomic) POITableView *searchTableView;
@property (retain, nonatomic) POICorrectionTextView *searchErrorTips;
@property (retain, nonatomic) POITableView *nearTableView;
@property (retain, nonatomic) WCTimeLineFooterView *nearTableFooterView;
@property (retain, nonatomic) WCTimeLineFooterView *searchTableFooterView;
@property (retain, nonatomic) NSString *searchKeyword;
@property (weak, nonatomic) PickLocationManager *pickLocationManager;
@property (nonatomic) double errorTipsCenterY;
@property (nonatomic) BOOL hasLayouted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForTableViewCell;

- (id)init;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (double)tableViewVisibleHeight;
- (double)nearbyTableContentHeightAboveIndex:(unsigned long long)a0;
- (double)searchTableContentHeightAboveIndex:(unsigned long long)a0;
- (id)makeCell:(id)a0 forPOIItem:(id)a1 withWidth:(float)a2 AndKeyWord:(id)a3;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)handleTableViewPanGesture:(id)a0;
- (void)tableView:(id)a0 didSelectAt:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateSearchBarAppearance;
- (id)poiCorrectionKeyWord;
- (void).cxx_destruct;

@end
