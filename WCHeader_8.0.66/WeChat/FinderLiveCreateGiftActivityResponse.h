@class FinderLiveGiftActivityInfo, FinderLiveErrorPage, BaseResponse;

@interface FinderLiveCreateGiftActivityResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveGiftActivityInfo *giftActivityInfo;
@property (retain, nonatomic) FinderLiveErrorPage *errorPage;

+ (void)initialize;

@end
