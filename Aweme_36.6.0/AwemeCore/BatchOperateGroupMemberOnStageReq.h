@class NSString;

@interface BatchOperateGroupMemberOnStageReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *memberIds;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) int groupLiveType;

+ (id)descriptor;

@end
