@class NSString, AWEGuestFollowListSectionViewModel;

@interface AWEGuestFollowListContainerViewModel : AWEBaseListViewModel <AWEGuestModeMessage>

@property (retain, nonatomic) AWEGuestFollowListSectionViewModel *followSectionVM;
@property (nonatomic) long long totalFollowCount;
@property (copy, nonatomic) NSString *nextPageToken;
@property (nonatomic) BOOL showLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (BOOL)loadMoreHasMore;
- (void)guestDidFinishFollowUser:(id)a0 isUnfollow:(BOOL)a1;
- (void)fetchWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchListDataWithType:(long long)a0;
- (void)handleDataStateChanged;
- (void)calculateHeaderTitle;
- (void)resetFollowSection;
- (void).cxx_destruct;
- (void)dealloc;

@end
