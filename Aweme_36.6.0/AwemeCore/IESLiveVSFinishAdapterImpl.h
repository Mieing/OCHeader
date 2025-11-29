@class NSString;

@interface IESLiveVSFinishAdapterImpl : IESLiveBaseAdapter <IESLiveVSFinishAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPersonalRecommendSwitchOn;
- (void)fetchRoomInfoWithRoomID:(id)a0 completion:(id /* block */)a1;
- (void)goLiveRoom:(id)a0 params:(id)a1 isDrawEnabled:(BOOL)a2 ownerUserId:(id)a3 roomId:(id)a4 trackContext:(id)a5;
- (void)initRoomServiceWithTrackContext:(id)a0;
- (void)goLiveRoomWithDictionary:(id)a0 resultDic:(id)a1 isDrawEnabled:(BOOL)a2 ownerUserId:(id)a3 roomId:(id)a4 trackContext:(id)a5;

@end
