@interface AWEFormatAudioStreamApi : AWEFormatBaseApi

- (void)interruptFormatAudioStreamWithRoomID:(id)a0 streamId:(id)a1 callBack:(id /* block */)a2;
- (void)getFormatAudioStreamWithRoomID:(id)a0 reqId:(id)a1 text:(id)a2 callBack:(id /* block */)a3;

@end
