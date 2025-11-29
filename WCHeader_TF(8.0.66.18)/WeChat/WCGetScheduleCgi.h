@class NSData, NSMutableArray;
@protocol WCGetScheduleCgiDelegate;

@interface WCGetScheduleCgi : WCBaseCgi

@property (nonatomic) BOOL firstPageOnly;
@property (retain, nonatomic) NSMutableArray *scheduleItems;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL isCancel;
@property (weak, nonatomic) id<WCGetScheduleCgiDelegate> delegate;
@property (retain, nonatomic) NSData *pageContext;

- (id)init;
- (void)requestFirstPageItems;
- (void)requestAllScheduleItems;
- (void)requestAllScheduleItemsWithPageContext:(id)a0;
- (void)requestScheduleItemsWithPage:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
