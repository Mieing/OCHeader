@class WCFinderBaseCgi, NSString, NSData, WCFinderFlowEventReportInfo, NSMutableArray;
@protocol WCFinderSearchEventViewModelDelegate;

@interface WCFinderSearchEventViewModel : NSObject

@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *queryText;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL hasNoMoreData;
@property (retain, nonatomic) NSMutableArray *eventArray;
@property (retain, nonatomic) WCFinderBaseCgi *requestCgi;
@property (retain, nonatomic) WCFinderFlowEventReportInfo *reportInfo;
@property (weak, nonatomic) id<WCFinderSearchEventViewModelDelegate> delegate;
@property (copy, nonatomic) NSString *flowId;
@property (copy, nonatomic) NSString *eventVisitId;

- (void)searchEventWithText:(id)a0;
- (void)searchNextPage;
- (BOOL)isEqualWithLastQueryText:(id)a0;
- (void)reportFlowEventIfNeed;
- (void).cxx_destruct;

@end
