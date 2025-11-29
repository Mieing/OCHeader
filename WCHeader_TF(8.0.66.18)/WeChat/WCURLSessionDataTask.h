@interface WCURLSessionDataTask : WCURLSessionTask

- (int)_onCornetTaskReceiveHeader:(id)a0 statusCode:(int)a1 taskId:(id)a2 taskProtocol:(id)a3;
- (int)onCornetTaskReceiveHeader:(id)a0 statusCode:(int)a1 taskId:(id)a2 taskProtocol:(id)a3;
- (BOOL)_onCornetTaskReceiveData:(id)a0;
- (BOOL)onCornetTaskReceiveData:(id)a0;

@end
