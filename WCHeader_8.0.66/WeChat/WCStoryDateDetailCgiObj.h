@class NSString;

@interface WCStoryDateDetailCgiObj : WCStoryBaseCGIObj

@property (nonatomic) int timeZone;
@property (retain, nonatomic) NSString *dateString;
@property (copy, nonatomic) id /* block */ dataBlock;
@property (copy, nonatomic) id /* block */ dbSyncBlock;

- (id)init;
- (id)initWithDateString:(id)a0 timeZone:(int)a1;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (id)storyDataItemFromServerResponse:(id)a0;
- (void).cxx_destruct;

@end
