@class NSString;

@interface MMOpenVoiceJoinRoomCGIImp : NSObject <PBMessageObserverDelegate> {
    NSString *_currentRequestAppId;
    id /* block */ _currentRoomCGICallback;
}

- (void)cgiJoinRoomWithAppid:(id)a0 groupId:(id)a1 signature:(id)a2 nonceStr:(id)a3 timeStamp:(int)a4 privateData:(id)a5 callback:(id /* block */)a6;
- (void)sendRequest:(id)a0 Retry:(int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
