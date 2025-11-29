@class IESLiveInteractiveSignalConfig;
@protocol IESLiveRoomService;

@interface IESLiveInteractiveSignalApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) IESLiveInteractiveSignalConfig *config;
@property (nonatomic) long long apiRetryCount;

- (id)initWithRoomModel:(id)a0 config:(id)a1;
- (void)sendSignal:(id)a0 toUsers:(id)a1 channel:(id)a2 finished:(id /* block */)a3;
- (void)sendSignal:(id)a0 toUsers:(id)a1 channel:(id)a2 extra:(id)a3 finished:(id /* block */)a4;
- (void)sendSignal:(id)a0 toUsers:(id)a1 channel:(id)a2 basePath:(id)a3 scene:(unsigned long long)a4 extra:(id)a5 finished:(id /* block */)a6;
- (void).cxx_destruct;

@end
