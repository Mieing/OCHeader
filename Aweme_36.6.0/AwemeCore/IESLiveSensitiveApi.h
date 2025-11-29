@protocol IESLiveRoomService;

@interface IESLiveSensitiveApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> room;

- (id)initWithRoomId:(id)a0;
- (void)addSensitiveWord:(id)a0 completion:(id /* block */)a1;
- (void)delSensitiveWord:(id)a0 completion:(id /* block */)a1;
- (id)paramsWithRoom:(id)a0;
- (void)getSensitiveWordCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
