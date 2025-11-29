@class HTSLiveSingleTLPKInfo;

@interface GetSingleTimeLimitPkInfosResp_Data : IESLivePBBaseMessage

@property (nonatomic) int status;
@property (retain, nonatomic) HTSLiveSingleTLPKInfo *info;
@property (nonatomic) BOOL hasInfo;

+ (id)descriptor;

@end
