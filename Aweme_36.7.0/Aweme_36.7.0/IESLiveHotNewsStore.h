@class HTSEventContext, NSString;
@protocol IESLiveRoomService, IESLiveHotNewsService;

@interface IESLiveHotNewsStore : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) HTSEventContext *eventContext;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveHotNewsService> hotNewsService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didUpdateRoom:(id)a0;
- (id)initWithRoomModel:(id)a0 eventContext:(id)a1;
- (id)getTitleFromJsonString:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
