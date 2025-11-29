@class NSMutableArray;

@interface GetTimeLimitPkThemeConfigResp_GiftGroupInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *giftInfoArray;
@property (readonly, nonatomic) unsigned long long giftInfoArray_Count;

+ (id)descriptor;

@end
