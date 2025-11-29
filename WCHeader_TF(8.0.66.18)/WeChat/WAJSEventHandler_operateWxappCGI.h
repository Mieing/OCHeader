@interface WAJSEventHandler_operateWxappCGI : WAJSEventHandler_BaseEvent

@property (nonatomic) unsigned int curCgi;

- (void)handleJSEvent:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;

@end
