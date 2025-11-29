@class WCFinderDataItem, NSString, NSData;

@interface WCFinderGetLiveOnlineMemberCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) long long cgiRequestScene;
@property (retain, nonatomic) NSString *micId;
@property (retain, nonatomic) NSString *boardKey;
@property (nonatomic) unsigned int boardType;
@property (nonatomic) unsigned long long filterScene;
@property (retain, nonatomic) NSData *getLiveOnlineMemberBuf;

- (id)initWithFinderTaskId:(id)a0 reqBuffer:(id)a1 micId:(id)a2 boardKey:(id)a3 boardType:(unsigned int)a4 filterScene:(unsigned long long)a5 successBlock:(id /* block */)a6 failBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
