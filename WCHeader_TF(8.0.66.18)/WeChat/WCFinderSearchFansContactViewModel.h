@class WCFinderSearchItemReportQueue, NSString, WCFinderBaseCgi, NSData, WCFinderMentionSearchSection;
@protocol WCFinderFollowSearchContactViewModelDelegate;

@interface WCFinderSearchFansContactViewModel : NSObject <WCFinderSearchContactViewModelProtocol> {
    int _scene;
}

@property (retain, nonatomic) NSString *latestQueryText;
@property (retain, nonatomic) NSString *latestRequestID;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL queryContinueFlag;
@property (retain, nonatomic) WCFinderSearchItemReportQueue *reportQueue;
@property (copy, nonatomic) NSString *searchSessionid;
@property (retain, nonatomic) NSString *currentFinderUsername;
@property (weak, nonatomic) id<WCFinderFollowSearchContactViewModelDelegate> delegate;
@property (retain, nonatomic) WCFinderBaseCgi *searchCgi;
@property (retain, nonatomic) WCFinderMentionSearchSection *fansSec;
@property (nonatomic) int scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isRepetSearch:(id)a0;
- (void)queryContactWith:(id)a0;
- (void)appendFansSearchInfo:(id)a0;
- (BOOL)containTargetSearchInfoArray:(id)a0 targetInfo:(id)a1;
- (void)onQueryNextPageContact;
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
- (void)addToBlackList:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (unsigned long long)mentionTypeForSection:(long long)a0;
- (BOOL)moreThenOneSection;
- (id)titleForSection:(id)a0;
- (void).cxx_destruct;

@end
