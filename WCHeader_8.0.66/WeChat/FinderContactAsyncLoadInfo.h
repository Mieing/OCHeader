@class FinderLiveInfo, NSString, FinderLiveNoticeInfo, FinderObject;

@interface FinderContactAsyncLoadInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) FinderLiveInfo *liveInfo;
@property (retain, nonatomic) FinderObject *liveFinderObject;
@property (nonatomic) unsigned int memberStatus;

+ (void)initialize;

@end
