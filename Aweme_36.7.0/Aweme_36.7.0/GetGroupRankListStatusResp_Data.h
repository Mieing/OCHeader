@class NSString;

@interface GetGroupRankListStatusResp_Data : IESLivePBBaseMessage

@property (nonatomic) BOOL openStatus;
@property (copy, nonatomic) NSString *playModId;
@property (nonatomic) int status;

+ (id)descriptor;

@end
