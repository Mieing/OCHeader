@class WCFinderDataItem, NSString;

@interface WCFinderBanLiveCommentCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (copy, nonatomic) NSString *audienceUsername;
@property (nonatomic) BOOL enable;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) long long liveScene;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithDataItem:(id)a0 audienceUsername:(id)a1 scene:(unsigned long long)a2 liveScene:(long long)a3 enable:(BOOL)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
