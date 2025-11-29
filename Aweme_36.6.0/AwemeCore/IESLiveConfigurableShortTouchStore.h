@class HTSEventContext, IESLiveConfigurableShortTouchApi, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLiveConfigurableShortTouchReaction;

@interface IESLiveConfigurableShortTouchStore : NSObject

@property (retain, nonatomic) IESLiveConfigurableShortTouchApi *api;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) id<IESLiveConfigurableShortTouchReaction> reaction;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;

- (void)didSetAttachingDIContext;
- (void)fetchShortTouchInfo:(id)a0;
- (BOOL)needShowAnimation:(id)a0;
- (void)showAnimationType:(unsigned long long)a0;
- (void)clickType:(unsigned long long)a0;
- (id)clickRecord;
- (id)animationRecord;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
