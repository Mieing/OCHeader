@class NSArray, WCFinderMentionUserSection, WCFinderMentionUserSearchViewModel, FTSContactSearchUtilLogic;
@protocol WCFinderMentionUserActionSheetViewModelDelegate;

@interface WCFinderMentionUserActionSheetViewModel : NSObject

@property (retain, nonatomic) WCFinderMentionUserSection *recentSection;
@property (retain, nonatomic) WCFinderMentionUserSection *followSection;
@property (retain, nonatomic) NSArray *normalSections;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) WCFinderMentionUserSearchViewModel *search;
@property (retain, nonatomic) FTSContactSearchUtilLogic *contactSearchLogic;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isError;
@property (weak, nonatomic) id<WCFinderMentionUserActionSheetViewModelDelegate> delegate;

- (id)init;
- (void)realUpdateViewModelData;
- (void)fetchLocalContactList;
- (BOOL)hasMorePage;
- (id)findMoreSec;
- (id)contactAtIndexPath:(id)a0;
- (void)requestNextPage:(id /* block */)a0;
- (void)fetchMoreFollow:(BOOL)a0 complete:(id /* block */)a1;
- (void)search:(id)a0;
- (void)expandSection:(long long)a0;
- (BOOL)preSecitonIsFetchableForSection:(long long)a0;
- (BOOL)empty;
- (BOOL)loading;
- (BOOL)error;
- (void).cxx_destruct;

@end
