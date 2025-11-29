@class NSArray;
@protocol IESLiveRoomService, IESLiveInteractDynamicContainerProvider;

@interface IESLiveInteractDynamicJSBHandler : NSObject

@property (nonatomic) BOOL isInRoom;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESLiveInteractDynamicContainerProvider> dynamicProvider;
@property (copy, nonatomic) NSArray *jsbHandlers;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })parseFrame:(id)a0;
- (id)invocationPrefix:(id)a0 forType:(id)a1 extra:(id)a2 context:(id)a3;
- (id)jsbHandlersClassList;
- (void).cxx_destruct;

@end
