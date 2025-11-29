@class FinderBaseRequest, FinderLiveGiftActivityInfo, BaseResponse;

@interface FinderLiveGetGiftActivityInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) FinderLiveGiftActivityInfo *giftActivityInfo;

+ (void)initialize;

@end
