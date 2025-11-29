@class NSString;
@protocol IESLiveMonitor;

@interface IESLiveGiftDetailAPIImpl : HTSLiveApi <IESLiveGiftDetailAPI>

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchGiftDataWithIDList:(id)a0 liveRoomModel:(id)a1 scene:(unsigned long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
