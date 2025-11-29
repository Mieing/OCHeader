@class NSString, NSArray;

@interface AWESearchMidDCResponse : NSObject <AWEDCFeedListResponseProtocol>

@property (copy, nonatomic) NSString *dcRequestID;
@property (nonatomic) BOOL isPrefetch;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *dcFeedListModelArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRequestID:(id)a0;
- (id)requestID;
- (void).cxx_destruct;

@end
