@class NSString, FinderLiveInfo, FinderLiveContact;

@interface FinderGetWatchLiveInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveContact *anchorLiveContact;
@property (retain, nonatomic) FinderLiveInfo *liveInfo;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int createTime;

+ (void)initialize;

@end
