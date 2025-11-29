@class IESGCPApi;

@interface IESGCPExplainCardAPI : NSObject

@property (retain, nonatomic) IESGCPApi *api;

- (void)requestExplainCardDataWithRoomId:(id)a0 anchorId:(id)a1 gameId:(id)a2 retryCount:(long long)a3 fromType:(long long)a4 introduceReqCount:(long long)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;

@end
