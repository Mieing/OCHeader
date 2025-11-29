@class NSString;

@interface GetGroupRankListStatusReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) int groupLiveType;

+ (id)descriptor;

@end
