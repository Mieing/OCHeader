@class WCFinderSearchItemReportQueue, NSString, WCFinderBaseCgi, NSData, WCFinderMentionSearchSection, NSArray;
@protocol WCFinderFollowSearchContactViewModelDelegate;

@interface WCFinderFollowSearchContactViewModel : NSObject <WCFinderSearchContactViewModelProtocol> {
    int _scene;
}

@property (retain, nonatomic) NSString *latestQueryText;
@property (retain, nonatomic) NSString *latestRequestID;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL queryContinueFlag;
@property (retain, nonatomic) WCFinderSearchItemReportQueue *itemReportQueue;
@property (weak, nonatomic) id<WCFinderFollowSearchContactViewModelDelegate> delegate;
@property (retain, nonatomic) WCFinderBaseCgi *searchCgi;
@property (retain, nonatomic) WCFinderMentionSearchSection *followSec;
@property (retain, nonatomic) WCFinderMentionSearchSection *moreSec;
@property (retain, nonatomic) NSArray *sections;
@property (nonatomic) int scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isRepetSearch:(id)a0;
- (void)queryContactWith:(id)a0;
- (void)onQueryNextPageContact;
- (BOOL)containTargetSearchInfoArray:(id)a0 targetInfo:(id)a1;
- (void)appendMoreSearchInfo:(id)a0;
- (void)appendFollowSearchInfo:(id)a0;
- (id)latestQueryString;
- (BOOL)isNoMoreData;
- (void)resetSearchStatus;
- (unsigned long long)searchNumsOfSection;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)a0;
- (id)searchInfoAtIndexPath:(id)a0;
- (void)recordResultDisplay:(id)a0;
- (void)reportItemExposeInfo;
- (unsigned long long)cellActionType;
- (BOOL)isFinderContact;
- (id)searchPlaceHolder;
- (unsigned long long)mentionTypeForSection:(long long)a0;
- (BOOL)moreThenOneSection;
- (id)titleForSection:(id)a0;
- (void).cxx_destruct;

@end
