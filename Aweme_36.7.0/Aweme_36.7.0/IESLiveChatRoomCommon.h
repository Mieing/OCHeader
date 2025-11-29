@class IESLiveChatRoomTrackerContext, IESLiveStatusDispatcher, IESLiveChatRoomTracker;

@interface IESLiveChatRoomCommon : IESLiveRoomComponent

@property (nonatomic) double startTime;
@property (retain, nonatomic) IESLiveChatRoomTracker *chatRoomTracker;
@property (retain, nonatomic) IESLiveChatRoomTrackerContext *chatRoomTrackerContext;
@property (retain, nonatomic) IESLiveStatusDispatcher *statusDispatcher;
@property (nonatomic) BOOL isAnchor;

- (void)componentBindService;
- (void)trackWithEventName:(id)a0;
- (void)registChatRoomStatusDispatcher:(id)a0;
- (void)trackWithEventName:(id)a0 andExtParams:(id)a1;
- (void)trackCustomWithEventName:(id)a0;
- (void)changeStatus:(unsigned long long)a0;
- (void).cxx_destruct;

@end
