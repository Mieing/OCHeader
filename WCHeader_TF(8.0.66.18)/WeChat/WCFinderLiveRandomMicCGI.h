@class WCFinderDataItem, NSData;

@interface WCFinderLiveRandomMicCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long opCode;
@property (nonatomic) unsigned long long applyPos;
@property (copy, nonatomic) id /* block */ completionBlock;

- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 liveCookies:(id)a2 opCode:(unsigned long long)a3 applyPos:(unsigned long long)a4 completionBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
