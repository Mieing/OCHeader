@class NSString;

@interface AWEFollowListSearchBarViewModel : AWEBaseListSectionViewModel

@property (nonatomic) BOOL isKeyBoardShown;
@property (nonatomic) BOOL searching;
@property (copy, nonatomic) NSString *searchText;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)followingListKeyboardDidShowNotification:(id)a0;
- (void)followingListKeyboardDidHideNotification:(id)a0;
- (void).cxx_destruct;
- (void)addObserver;
- (void)dealloc;

@end
