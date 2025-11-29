@protocol IESLiveRoomService;

@interface IESLiveLinkMicResultAPI : HTSLiveApi

@property (weak, nonatomic) id<IESLiveRoomService> room;

- (void)fetchAudienceLeaveInfo:(id)a0 source:(int)a1 callback:(id /* block */)a2;
- (void)fetchAudienceAudienceRecommendRoom:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
