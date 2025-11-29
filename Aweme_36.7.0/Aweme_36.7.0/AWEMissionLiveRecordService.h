@class NSString;

@interface AWEMissionLiveRecordService : HTSService <AWEMissionLiveRecordService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isBetweenStartTime:(id)a0 endTime:(id)a1;
- (void)fetchRoomInfoWithWithSecuid:(id)a0 completion:(id /* block */)a1;
- (id)transModelToDic:(id)a0 key:(id)a1;
- (id)getRecordLiveMissionParamsFromChallenge:(id)a0;
- (id)getRecordLiveMissionParamsFromMission:(id)a0;
- (void)tryEnterMissionLiveRecord:(id)a0 challenge:(id)a1 failRoute:(id /* block */)a2;

@end
