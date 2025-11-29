@class NSString;

@interface GetPCAudienceRankInfoReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *memberId;

+ (id)descriptor;

@end
