@class NSArray, NSString;

@interface AWEFeedDoubleColumnDCResponse : NSObject <AWEDCFeedListResponseProtocol>

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *dcFeedListModelArray;
@property (copy, nonatomic) NSString *dcResquestID;
@property (nonatomic) BOOL isPrefetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRequestID:(id)a0;
- (id)requestID;
- (void).cxx_destruct;

@end
