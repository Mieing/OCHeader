@interface AWEIMGroupParticipantBizInfoNetwork : NSObject

+ (void)updateGroupParticipantForFansClubWithCid:(id)a0 since:(id)a1 completion:(id /* block */)a2;
+ (void)updateAllGroupParticipantInfoWithCid:(id)a0 bizInfoRequestOptions:(unsigned long long)a1 cursor:(long long)a2 repeatCount:(long long)a3 completion:(id /* block */)a4;
+ (void)updateGroupParticipantSecUids:(id)a0 bizInfoRequestOptions:(unsigned long long)a1 cid:(id)a2 completion:(id /* block */)a3;

@end
