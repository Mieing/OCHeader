@class NSString, NSDictionary;
@protocol IESLiveCreateRoomPreCheckService, IESLiveMonitor;

@interface HTSHotsoonRoomAPI : HTSLiveApi

@property (retain, nonatomic) id<IESLiveCreateRoomPreCheckService> preCheckService;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSDictionary *createRoomExtraParams;

- (void)createRoomWithType:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (void)startLiveRequestWithParameters:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
