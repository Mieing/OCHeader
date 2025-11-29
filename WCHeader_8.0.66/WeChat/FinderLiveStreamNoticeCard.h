@class FinderContact, FinderLiveNoticeInfo;

@interface FinderLiveStreamNoticeCard : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) FinderContact *contact;

+ (void)initialize;

@end
