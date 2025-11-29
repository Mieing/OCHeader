@class FinderLiveNoticeInfo;

@interface FinderLiveNoticeBubbleInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL display;
@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (nonatomic) unsigned int disappearTimeMsWithoutAction;
@property (nonatomic) unsigned int disappearTimeMsAfterClick;

+ (void)initialize;

@end
