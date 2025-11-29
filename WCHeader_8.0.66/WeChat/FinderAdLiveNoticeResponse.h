@class FinderLiveNoticeInfo, BaseResponse;

@interface FinderAdLiveNoticeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo;
@property (nonatomic) unsigned int refreshInterval;

+ (void)initialize;

@end
