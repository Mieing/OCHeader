@class NSString;
@protocol IESLiveMonitor;

@interface IESLiveInteractiveGiftAPIImpl : HTSLiveApi <IESLiveInteractiveGiftAPI>

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchGiftListWithPage:(long long)a0 count:(long long)a1 scene:(long long)a2 roomID:(id)a3 callback:(id /* block */)a4;
- (id)changeGiftListWithPinGiftIds:(id)a0 dislikeGiftIds:(id)a1 scene:(long long)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;

@end
