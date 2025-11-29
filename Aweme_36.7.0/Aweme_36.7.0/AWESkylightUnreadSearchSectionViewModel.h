@class NSString, NSObject;
@protocol AWEContactLocalSearchManagerProtocol;

@interface AWESkylightUnreadSearchSectionViewModel : AWECommonUserListBaseSectionViewModel <AWEUserMessage>

@property (retain, nonatomic) NSObject<AWEContactLocalSearchManagerProtocol> *searchManager;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) BOOL searching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)setupViewModel;
- (id)enterFrom;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)syncModelFollowStatus:(id)a0 status:(long long)a1;
- (void).cxx_destruct;
- (long long)type;
- (void)dealloc;
- (id)previousPage;

@end
