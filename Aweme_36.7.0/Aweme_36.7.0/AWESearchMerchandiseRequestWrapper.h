@class NSDictionary, NSNumber, AWEDoubleColumnSearchMerchandiseResponse;

@interface AWESearchMerchandiseRequestWrapper : NSObject

@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ responseBlock;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseResponse *chunkResponse;
@property (retain, nonatomic) NSNumber *fullChunkStatusCode;
@property (retain, nonatomic) NSNumber *liteChunkStatusCode;
@property (nonatomic) BOOL successInvoke;
@property (nonatomic) BOOL callbackExecuted;
@property (nonatomic) BOOL fullChunkReceivedFirst;
@property (nonatomic) long long statusDetail;
@property (retain, nonatomic) NSNumber *asyncChunkStatusCode;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseResponse *asyncChunkResponse;
@property (copy, nonatomic) NSDictionary *asyncChunkItemMap;
@property (nonatomic) BOOL didReport;

- (void).cxx_destruct;

@end
