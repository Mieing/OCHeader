@class FinderBatchLoadObjectRequestID, WCFinderDataItem;

@interface WCFinderBatchGetDataItemResult : NSObject

@property (retain, nonatomic) FinderBatchLoadObjectRequestID *request;
@property (nonatomic) BOOL hasFound;
@property (retain, nonatomic) WCFinderDataItem *dataItem;

- (void).cxx_destruct;

@end
