@class NSString;

@interface GetSensitivieWordResp_ResponseExtra : IESLivePBBaseMessage

@property (nonatomic) long long maxCount;
@property (copy, nonatomic) NSString *description_p;

+ (id)descriptor;

@end
