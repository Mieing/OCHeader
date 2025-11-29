@class NSString, FinderLiveModLiveNoticeInfoRequest_ImgInfo;

@interface FinderLiveModLiveNoticeInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *noticeId;
@property (retain, nonatomic) FinderLiveModLiveNoticeInfoRequest_ImgInfo *bgImgInfo;
@property (nonatomic) unsigned int styleId;
@property (nonatomic) unsigned int topNoticeOptype;
@property (nonatomic) unsigned int notificationmsgTriggerType;

+ (void)initialize;

@end
