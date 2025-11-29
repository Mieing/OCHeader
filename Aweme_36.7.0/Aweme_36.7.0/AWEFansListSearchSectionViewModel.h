@class NSString, NSArray, NSObject;
@protocol AWEContactLocalSearchManagerProtocol;

@interface AWEFansListSearchSectionViewModel : AWEFansUserListBaseSectionViewModel

@property (retain, nonatomic) NSObject<AWEContactLocalSearchManagerProtocol> *searchManager;
@property (retain, nonatomic) NSString *oldSearchText;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) BOOL searching;
@property (retain, nonatomic) NSArray *fansList;

- (void)setupViewModel;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void).cxx_destruct;

@end
