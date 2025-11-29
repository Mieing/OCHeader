@class HTSEventContext, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveRoomComponent : IESLiveComponentBase

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)remoteRoomDataReady:(id)a0;
- (void)invokeRefreshAfterPreloadTask:(id /* block */)a0;
- (void)setRoom:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (void)invokeBeginAppearAfterPreloadTask:(id /* block */)a0;
- (void).cxx_destruct;

@end
