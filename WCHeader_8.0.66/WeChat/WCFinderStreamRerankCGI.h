@class NSArray, WCFinderLocationInfo;

@interface WCFinderStreamRerankCGI : WCFinderBaseCgi

@property (retain, nonatomic) NSArray *feedArray;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) WCFinderLocationInfo *locationInfo;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFeedInfoArray:(id)a0 commentScene:(int)a1 lastBuffer:(id)a2 location:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
