@class FinderLiveAnchorCustomGiftInfo, NSMutableArray, BaseResponse;

@interface FinderLiveGetCustomGiftListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *fanclubCustomGiftList;
@property (retain, nonatomic) NSMutableArray *anchorCustomGiftList;
@property (retain, nonatomic) FinderLiveAnchorCustomGiftInfo *fanclubSetting;

+ (void)initialize;

@end
