@class NSString, NSArray, NSData, WCFinderMentionSearchSection, WCFinderMentionContactSearcher;
@protocol WCFinderMentionSearchContactViewModelDelegate;

@interface WCFinderMentionSearchContactViewModel : NSObject <WCFinderContactExt>

@property (retain, nonatomic) NSString *latestQueryText;
@property (retain, nonatomic) NSString *latestRequestID;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL queryContinueFlag;
@property (nonatomic) long long lastReportExposeTimeInMs;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) WCFinderMentionSearchSection *followSec;
@property (retain, nonatomic) WCFinderMentionSearchSection *friendSec;
@property (retain, nonatomic) WCFinderMentionSearchSection *moreSec;
@property (retain, nonatomic) WCFinderMentionContactSearcher *searcher;
@property (nonatomic) int scene;
@property (weak, nonatomic) id<WCFinderMentionSearchContactViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isRepetSearch:(id)a0;
- (void)queryContactWith:(id)a0;
- (void)onQueryNextPageContact;
- (id)latestQueryString;
- (BOOL)isNoMoreData;
- (void)resetSearchStatus;
- (unsigned long long)searchNumsOfSection;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)a0;
- (void)showMoreForSection:(long long)a0;
- (id)searchInfoAtIndexPath:(id)a0;
- (BOOL)moreThenOneSection;
- (id)titleForSection:(id)a0;
- (unsigned long long)mentionTypeForSection:(long long)a0;
- (BOOL)deleteAllSearchRecord;
- (BOOL)deleteSearchRecord:(id)a0;
- (id)displayShowMoreWordingForSection:(long long)a0;
- (void).cxx_destruct;

@end
