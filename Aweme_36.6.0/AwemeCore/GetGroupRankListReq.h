@class NSString;

@interface GetGroupRankListReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *roomId;

+ (id)descriptor;

@end
