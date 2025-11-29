@class FinderLiveGiftWallInfo, BaseResponse;

@interface FinderLiveGetGiftWallInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveGiftWallInfo *giftWallInfo;

+ (void)initialize;

@end
