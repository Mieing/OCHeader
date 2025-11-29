@class NSMutableArray;

@interface GetSingleTimeLimitPkThemeConfigResp_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *giftGroupInfosArray;
@property (readonly, nonatomic) unsigned long long giftGroupInfosArray_Count;
@property (retain, nonatomic) NSMutableArray *themeInfosArray;
@property (readonly, nonatomic) unsigned long long themeInfosArray_Count;

+ (id)descriptor;

@end
