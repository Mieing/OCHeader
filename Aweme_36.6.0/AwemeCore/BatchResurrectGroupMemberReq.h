@class NSString;

@interface BatchResurrectGroupMemberReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *memberIds;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) int groupLiveType;

+ (id)descriptor;

@end
