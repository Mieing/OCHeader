@class WCTogetherHistoryCGI, NSString, NSArray, NSCalendar, WCTogetherFriendsListViewSection, WCTogetherMoreViewSection, NSDate, NSMutableArray, CContact;
@protocol WCTogetherHistoryViewModelDelegate;

@interface WCTogetherHistoryViewModel : NSObject <WCTogetherFeedViewItemDelegate, WCTogetherFriendsListViewItemDelegate, WCFacadeExt>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL showsTogetherFriendsInHeader;
@property (copy, nonatomic) NSArray *viewSections;
@property (retain, nonatomic) WCTogetherFriendsListViewSection *headerViewSection;
@property (retain, nonatomic) WCTogetherMoreViewSection *moreViewSection;
@property (retain, nonatomic) NSMutableArray *cachedDataItems;
@property (retain, nonatomic) NSMutableArray *dataItems;
@property (nonatomic) unsigned long long maxFeedID;
@property (nonatomic) unsigned long long minFeedID;
@property (nonatomic) BOOL hasMoreItems;
@property (readonly, nonatomic) BOOL isRequestingItems;
@property (retain, nonatomic) WCTogetherHistoryCGI *togetherHistoryCGI;
@property (retain, nonatomic) NSCalendar *calendarOfDayFormatter;
@property (retain, nonatomic) NSDate *today;
@property (nonatomic) long long yearOfToday;
@property (nonatomic) long long monthOfToday;
@property (nonatomic) long long dayOfToday;
@property (nonatomic) long long yearOfYesterday;
@property (nonatomic) long long monthOfYesterday;
@property (nonatomic) long long dayOfYesterday;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) struct CGPoint { double x; double y; } lastScrollContentOffset;
@property (readonly, nonatomic) CContact *contact;
@property (weak, nonatomic) id<WCTogetherHistoryViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (void)loadHeader;
- (void)loadCachedData;
- (void)updateCachedData;
- (void)reloadData;
- (void)reloadMoreViewSection;
- (void)didReloadData;
- (void)requestItemsForNextPage;
- (void)didFinishRequestingItemsForNextPageWithResponse:(id)a0;
- (void)didFailToRequestItemsForNextPageWithError:(id)a0;
- (void)tableViewDidScroll:(id)a0;
- (void)autoplayVideoInTableView:(id)a0;
- (void)pausePlayingVideoWithViewItem:(id)a0;
- (void)pausePlayingVideos;
- (void)updateDatatimeInfo;
- (void)getYearText:(id *)a0 dayText:(id *)a1 fromDate:(id)a2;
- (void)getDateText:(id *)a0 fromDate:(id)a1;
- (void)onDataChangedWithAdded:(id)a0 andChanged:(id)a1 andDeleted:(id)a2;
- (void)viewItem:(id)a0 didClickContactInfoWithDataItem:(id)a1 contact:(id)a2;
- (void)viewItem:(id)a0 didClickLocationInfoWithDataItem:(id)a1;
- (void)viewItem:(id)a0 didClickContentDetailWithDataItem:(id)a1;
- (void)viewItem:(id)a0 didClickMediaWithDataItem:(id)a1 mediaItem:(id)a2;
- (void)friendsListViewItemDidClickFriendsInfo:(id)a0;
- (void).cxx_destruct;

@end
