@class NSNumber, NSString;

@interface IESLiveAdministerSettingApi : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *administerID;

- (id)initWithRoomID:(id)a0 administerID:(id)a1;
- (void)fetchUseInfoWithTargetUid:(id)a0 secTargetUid:(id)a1 completion:(id /* block */)a2;
- (void)administerPrivilegeSettingWithactionType:(int)a0 privilegeType:(int)a1 enterFromMerge:(id)a2 enterMethod:(id)a3 completion:(id /* block */)a4;
- (void)fetchRoomInfoForDanmukuWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
