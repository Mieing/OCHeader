@class NSString, NSData;

@interface WCFinderGetHistoryLiveListCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int startTimeRange;
@property (nonatomic) unsigned int endTimeRange;
@property (nonatomic) int requestScene;

- (id)initWithAnchorFinderUsername:(id)a0 requestScene:(int)a1 lastBuffer:(id)a2 startTimeRange:(unsigned int)a3 endTimeRange:(unsigned int)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
