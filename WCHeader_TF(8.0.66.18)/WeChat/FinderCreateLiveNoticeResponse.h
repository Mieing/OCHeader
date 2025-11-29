@class NSString, FinderLiveNoticeInfo, BaseResponse;

@interface FinderCreateLiveNoticeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *noticeUrl;
@property (retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo;

+ (void)initialize;

@end
