@class NSData, PackageGiftRecommendInfo;

@interface FinderLiveSyncPackageGiftRecommendInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *ctx;
@property (retain, nonatomic) PackageGiftRecommendInfo *newGiftRecommend;
@property (retain, nonatomic) PackageGiftRecommendInfo *expireGiftRecommend;
@property (retain, nonatomic) PackageGiftRecommendInfo *newFreeGiftRecommend;

+ (void)initialize;

@end
