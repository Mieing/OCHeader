@protocol IESLiveRoomService;

@interface IESLiveInteractCompetitionGameAPI : HTSLiveApi

@property (weak, nonatomic) id<IESLiveRoomService> room;

- (id)initWithRoom:(id)a0 DIContext:(id)a1;
- (void)setUser:(id)a0 asPerformerWithCallback:(id /* block */)a1;
- (void)unsetPerformer:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
