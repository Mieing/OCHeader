@interface WCStoryHistoryPageCgiObj : WCStoryBaseCGIObj

@property (nonatomic) int timeZone;
@property (nonatomic) unsigned long long maxID;
@property (copy, nonatomic) id /* block */ dataBlock;
@property (copy, nonatomic) id /* block */ dbSyncBlock;

- (id)init;
- (id)initWithTimeZone:(int)a0 maxID:(unsigned long long)a1;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (id)storyDataItemFromServerResponse:(id)a0;
- (void).cxx_destruct;

@end
