@interface WAJSEventHandler_operateSocketTask : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)closeSocketWithTaskID:(id)a0 code:(long long)a1 reason:(id)a2;
- (void)sendWithTaskID:(id)a0 dataObject:(id)a1;
- (void)sendWithTaskID:(id)a0 string:(id)a1;
- (void)sendWithTaskID:(id)a0 data:(id)a1;

@end
