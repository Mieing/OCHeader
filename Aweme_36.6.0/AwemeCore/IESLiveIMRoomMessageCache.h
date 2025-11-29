@class NSString, NSMutableArray;

@interface IESLiveIMRoomMessageCache : NSObject <IESLiveIMMessageCacheProvider>

@property (retain, nonatomic) NSMutableArray *delayMessageList;
@property (retain, nonatomic) NSMutableArray *scheduleMessageList;
@property (retain, nonatomic) NSMutableArray *discardableMessageList;
@property (nonatomic) long long maxDiscardableCacheSize;
@property (nonatomic) long long delaySyncThreshold;
@property (nonatomic) long long liveStreamDelayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addMessage:(id)a0 withType:(long long)a1;
- (id)getMessages:(long long)a0 withTime:(double)a1;
- (id)getMessages:(long long)a0 withCount:(long long)a1;
- (id)getMessages:(long long)a0 withCount:(long long)a1 filterBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
