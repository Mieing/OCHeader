@class NSNumber;
@protocol IESLiveMessageUplinkService;

@interface IESLiveSendSyncStreamInfoAPI : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomId;
@property (retain, nonatomic) NSNumber *liveId;
@property (nonatomic) long long ntpDiffTime;
@property (retain, nonatomic) id<IESLiveMessageUplinkService> uplinkService;

- (void)requestSyncStreamInfoArray:(id)a0 ntpDiffTime:(long long)a1 callback:(id /* block */)a2;
- (id)initWithRoomId:(id)a0 liveId:(id)a1;
- (void)p_uplinkRequestWithParameters:(id)a0 callback:(id /* block */)a1;
- (void)p_httpRequestWithParameters:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
