@class NSMutableArray;

@interface GetSensitivieWordResp_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *wordArray;
@property (readonly, nonatomic) unsigned long long wordArray_Count;

+ (id)descriptor;

@end
