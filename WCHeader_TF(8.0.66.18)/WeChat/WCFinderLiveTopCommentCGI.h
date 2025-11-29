@class WCFinderDataItem, NSData, NSString;

@interface WCFinderLiveTopCommentCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long commentSeq;
@property (copy, nonatomic) NSString *clientMsgId;
@property (copy, nonatomic) NSString *oriClientMsgId;
@property (nonatomic) unsigned int optype;

- (id)initWithFinderTaskId:(id)a0 liveCookies:(id)a1 commentSeq:(unsigned long long)a2 clientMsgId:(id)a3 originalClientMsgId:(id)a4 optype:(unsigned int)a5 successBlock:(id /* block */)a6 failBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
