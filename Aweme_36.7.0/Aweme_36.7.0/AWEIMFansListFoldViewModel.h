@interface AWEIMFansListFoldViewModel : AWEIMFansBaseViewModel

@property (nonatomic) BOOL hasClickedExpandFooter;
@property (nonatomic) unsigned long long state;

- (BOOL)isFromColdPush;
- (long long)rowCountForFansSection;
- (unsigned long long)sectionForFans;
- (void)updateStateWhenBeginRefresh;
- (void)updateStateWhenRefreshByCache;
- (void)updateStateWhenDataChanged;
- (void)setDidFoldOnLastListEntry;
- (long long)displayCountOnFoldState;
- (BOOL)didFoldOnLastListEntry;
- (id)storageFoldKey;
- (void)updateStateWhenBeginExpandFooter;
- (void)updateStateWhenBeginLoadMore;
- (void)expandFooterView:(BOOL)a0 originRowCount:(long long)a1;
- (long long)sectionCount;

@end
