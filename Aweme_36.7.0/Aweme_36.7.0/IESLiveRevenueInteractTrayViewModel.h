@class HTSEventContext, NSMutableDictionary, NSString, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLiveRevenueInteractModule;

@interface IESLiveRevenueInteractTrayViewModel : NSObject <HTSLiveMessageSubscriber, IESLiveRevenueInteractAction>

@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) NSMutableDictionary *playerMapping;
@property (retain, nonatomic) id<IESLiveRevenueInteractModule> revenueInteractModule;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (id)initWithRoom:(id)a0 eventContext:(id)a1 componentContext:(id)a2;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
