@class HTSEventContext;
@protocol IESLiveRoomService;

@interface IESLivePaidStreamParameterCreator : NSObject

@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (readonly, weak, nonatomic) HTSEventContext *trackContext;

- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (id)paidPanelParams:(long long)a0;
- (id)paidPanelParams:(long long)a0 paidObject:(id)a1 source:(unsigned long long)a2;
- (id)livePaidPanelParams;
- (id)cameraPaidPanelParams:(id)a0;
- (id)privilegeCameraPaidPanelParams:(unsigned long long)a0;
- (id)paidPanelCommonParams;
- (id)paidPanelParams:(long long)a0 paidObject:(id)a1;
- (void).cxx_destruct;

@end
