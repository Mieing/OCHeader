@class NSString, MMFinderLivePromoteListBaseViewItem;

@interface WCFinderLiveAnchorModPromoteJumpInfoListCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) MMFinderLivePromoteListBaseViewItem *item;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 type:(unsigned int)a1 anchorFinderUsername:(id)a2 opType:(unsigned int)a3 item:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
