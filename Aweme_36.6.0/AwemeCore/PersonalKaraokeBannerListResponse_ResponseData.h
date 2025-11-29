@class NSMutableArray;

@interface PersonalKaraokeBannerListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *bannerListArray;
@property (readonly, nonatomic) unsigned long long bannerListArray_Count;

+ (id)descriptor;

@end
