@class NSData, NSMutableArray;

@interface WCStoryFetchBgmCgiObj : WCStoryBaseCGIObj

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSMutableArray *imageDatas;
@property (nonatomic) unsigned long long videoDuration;
@property (nonatomic) int businessId;
@property (nonatomic) unsigned long long requestId;
@property (retain, nonatomic) NSData *classifyResultData;

- (id)initWithBlock:(id /* block */)a0;
- (void)start;
- (id)buildRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
