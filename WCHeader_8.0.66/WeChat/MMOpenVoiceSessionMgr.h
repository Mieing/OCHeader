@class NSString, NSMutableDictionary;

@interface MMOpenVoiceSessionMgr : NSObject <PBMessageObserverDelegate> {
    NSMutableDictionary *_sessionKeyPool;
    id /* block */ _currentCGIRequestCallback;
    NSString *_currentRequestAppId;
}

- (id)init;
- (void)get:(id)a0 privateData:(id)a1 callback:(id /* block */)a2;
- (void)reset:(id)a0;
- (id)add:(id)a0 sessionKey:(id)a1 lifeSpan:(unsigned int)a2;
- (void)updateSessionKeyRemote:(id)a0 privateData:(id)a1 callback:(id /* block */)a2;
- (void)sendRequest:(id)a0 Retry:(int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
