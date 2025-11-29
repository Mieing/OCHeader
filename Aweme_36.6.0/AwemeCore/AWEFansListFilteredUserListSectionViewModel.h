@class AWEFansListFilteredDataController, NSMutableArray;

@interface AWEFansListFilteredUserListSectionViewModel : AWEFansListUserListSectionViewModel

@property (retain, nonatomic) AWEFansListFilteredDataController *filterDataController;
@property (retain, nonatomic) NSMutableArray *filterUsers;

- (void)setupViewModel;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (id)deleteUsersWhoAreBeingRemoved:(id)a0;
- (id)baseDataController;
- (void).cxx_destruct;

@end
