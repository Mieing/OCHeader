@class FinderLiveAnchorCustomGiftInfo, NSMutableArray, BaseResponse;

@interface FinderLiveFanClubGetCustomGiftListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *customGifts;
@property (retain, nonatomic) FinderLiveAnchorCustomGiftInfo *anchorSetting;

+ (void)initialize;

@end
