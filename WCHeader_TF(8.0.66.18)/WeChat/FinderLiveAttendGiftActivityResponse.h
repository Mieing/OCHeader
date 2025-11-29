@class FinderBaseRequest, FinderLiveGiftActivityInfo, BaseResponse;

@interface FinderLiveAttendGiftActivityResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) FinderLiveGiftActivityInfo *giftActivityInfo;
@property (nonatomic) unsigned int statusFlag;

+ (void)initialize;

@end
