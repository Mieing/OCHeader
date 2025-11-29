@interface WAJSEventHandler_operateVideoPlayer : WAJSEventHandler_BaseEvent

@property (nonatomic) BOOL shouldRouteToService;
@property (nonatomic) long long dest;

- (void)handleJSEvent:(id)a0;
- (id)getCurrentSnapshot;
- (BOOL)operateVideoPlayer:(id)a0 videoId:(unsigned int)a1;

@end
