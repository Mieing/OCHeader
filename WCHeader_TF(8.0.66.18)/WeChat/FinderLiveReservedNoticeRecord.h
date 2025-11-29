@class FinderContact, FinderLiveNextLiveNotificationInfo, FinderLiveNoticeInfo;

@interface FinderLiveReservedNoticeRecord : WXPBGeneratedMessage

@property (nonatomic) unsigned int reservedNoticeType;
@property (retain, nonatomic) FinderContact *anchorContact;
@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) FinderLiveNextLiveNotificationInfo *nextLiveNotificationInfo;

+ (void)initialize;

@end
