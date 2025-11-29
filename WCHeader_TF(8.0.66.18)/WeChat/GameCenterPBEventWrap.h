@class NSString;

@interface GameCenterPBEventWrap : MMObject <PBMessageObserverDelegate>

@property (nonatomic) unsigned int eventId;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSString *svrpath;

+ (void)sendPBRequest:(id)a0 command:(unsigned int)a1 completion:(id /* block */)a2;
+ (void)sendPBRequest:(id)a0 command:(unsigned int)a1 svrPath:(id)a2 responseClass:(Class)a3 longPolling:(BOOL)a4 additionalInfo:(id)a5 completion:(id /* block */)a6;

- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
