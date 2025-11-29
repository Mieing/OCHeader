@protocol IESLiveRoomService;

@interface IESLiveResolutionApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> room;

- (void)requestChangeResolutionWithResolutionKey:(id)a0 completeBlock:(id /* block */)a1;
- (void)requestRecommendResotionWithResolutionKey:(id)a0 mode:(id)a1 bandwidth:(int)a2 completeBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
