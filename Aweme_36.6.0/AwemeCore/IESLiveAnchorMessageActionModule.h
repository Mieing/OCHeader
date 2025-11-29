@class HTSLiveMessageActionCreator;

@interface IESLiveAnchorMessageActionModule : IESLiveAnchorExecutionModule

@property (retain, nonatomic) HTSLiveMessageActionCreator *messageActionCreator;

- (id)subscribeMessages;
- (void)handleLiveRoomDidClose;
- (void)handleMediaStreamStarted;
- (void).cxx_destruct;
- (void)setup;

@end
