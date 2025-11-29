@class NSData, NSMutableArray, NSString;
@protocol MMFinderLiveReservedRecordViewModelDelegate;

@interface MMFinderLiveReservedRecordViewModel : NSObject

@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int reservedNoticeTotalCount;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) BOOL hasMoreData;
@property (weak, nonatomic) id<MMFinderLiveReservedRecordViewModelDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *reservedRecordList;
@property (copy, nonatomic) NSString *promoterToken;
@property (nonatomic) int enterType;
@property (nonatomic) int reportScene;
@property (retain, nonatomic) NSString *refPageType;
@property (nonatomic) unsigned long long openScene;
@property (nonatomic) unsigned int reserveScene;
@property (copy, nonatomic) id /* block */ onCustomReportNoticeDisplay;
@property (copy, nonatomic) id /* block */ onCustomReportNoticeClick;
@property (copy, nonatomic) id /* block */ onCustomReportNoticeReserveClick;

- (id)init;
- (void)resetAndFetchReservedRecordList;
- (void)fetchNextReservedRecordList;
- (void)didViewNoticeInfo:(id)a0;
- (void)didChangeNoticeReservation:(id)a0;
- (void)reserveNoticeInfo:(id)a0 anchorContact:(id)a1 notShowAlertView:(BOOL)a2 successAlert:(id)a3 completionHandler:(id /* block */)a4;
- (void)cancelReservingNoticeInfo:(id)a0 completionHandler:(id /* block */)a1 anchorContact:(id)a2;
- (void)getConcertTicketReceiveStatusForNoticeInfo:(id)a0 completionHandler:(id /* block */)a1;
- (id)getAudienceReserveLiveCGIExtentParamsForNoticeID:(id)a0;
- (void)reserveNextLiveNotice:(id)a0 anchorContact:(id)a1 isReserve:(BOOL)a2 completeBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
