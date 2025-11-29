@class NSMutableArray;

@interface GetTimeLimitPkThemeConfigResp_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *giftGroupInfosArray;
@property (readonly, nonatomic) unsigned long long giftGroupInfosArray_Count;

+ (id)descriptor;

@end
