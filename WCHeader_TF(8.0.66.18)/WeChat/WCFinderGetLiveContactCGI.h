@class NSString, NSData, WCFinderDataItem, FinderLiveContactExtRelationInfo;

@interface WCFinderGetLiveContactCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSData *liveContactExtInfo;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) FinderLiveContactExtRelationInfo *extRelationInfo;

- (id)initWithFinderTaskId:(id)a0 userName:(id)a1 fromScene:(unsigned long long)a2 extInfo:(id)a3 extRelationInfo:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (id)initWithLiveId:(unsigned long long)a0 objectId:(unsigned long long)a1 userName:(id)a2 fromScene:(unsigned long long)a3 extInfo:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
